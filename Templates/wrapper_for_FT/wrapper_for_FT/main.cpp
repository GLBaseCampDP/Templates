// ШК обгортка для функцій
template<typename T> struct A
{
  const T f;
  A(T fp) : f{ fp }  {}
};

// ШФ для обгортання функцій у A<T>
template<typename T> void* F(T f)
{
  return new A<T>(f);
}

typedef int(*FDEF)(int);
// функція яка буде обгортатись у A<FDEF>
int f(int) { return 1; }


int main() {

  A<FDEF>* p = (A<FDEF>*)F<FDEF>(f); // Обгортання
  p->f(1); // Запуск функції

  return 1;
}
