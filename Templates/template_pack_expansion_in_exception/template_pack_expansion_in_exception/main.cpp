struct a1 {};
struct a2 {};
struct a3 {};

template<class...Types>
void F(int arg) throw(Types...) {
  a1 t1;
  a2 t2;
  switch (arg) {
    case 1:
      throw t1;
      break;
    case 2:
      throw t2;
      break;
    default:
      throw 1;
      break;
  }
}

int main(void) {
    try {
        F<a1, a2>(1);
    }
    catch (...) {
        return 0;
    }
return 1;
}
