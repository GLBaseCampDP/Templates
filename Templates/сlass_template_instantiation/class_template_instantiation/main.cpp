namespace N {
 // template definition
 template<class T> struct A { void f(T) { }  };
}
// помилка явного інстанціювання
// template class A<int>;
template class N::A<char*>;// явнe інстанціювання
// явнe інстанціювання A<double>::f(double)
template void N::A<double>::f(double);
using N::A;
A<int> a; // неявнe інстанціювання
A<char>* p; // неявнe інстанціювання

template<class T> class B;
// помилка явного інстанціювання
//template class B<int>;
// помилка неявного інстанціювання
//B<char> b;
B<char>* p0; // неявнe інстанціювання

int main() {
  p->f(1); // call void A<char>::f(char)
}

template<class T> class B {};
