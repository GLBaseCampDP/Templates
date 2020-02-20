template <class T> struct A {   T i; };

// повна спеціалізація вбудованим типом
template <> struct A<int> { int i, j; };

template <typename T>  struct C { T i; };

// повна спеціалізація шаблонним класом
template <> struct C < A<int> > { A<int> j; };

template <
  typename T,
  template <typename I> class R
>  struct D {  R<T> i; };

// повна спеціалізація шаблоном класу
template <> struct D < int, A > { A<int> j; int i;};

// оголошення псевдоімені шаблонного класу
typedef A<int> _A;

// неявне інстаціювання ШК в побудова об’єктів
_A a;
C<_A> c;
D<int, A> d;


int main() {
 a.j = 7;
 c.j.j = 8;
 d.j.j = 9;
 return 0;
}
