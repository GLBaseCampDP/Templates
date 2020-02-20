#include <iostream>

// основний ШК
template <class T, class T1 = int>
struct A {
  T i;
  A() = default;
  A(T ) {};        // конструктори ШК
  ~A() = default;  // деструктор ШК

  // вкладений ШК
  template <class T3, class T2>
  struct A_incl {
    T2 b;
    T3 f() { return (T3)0; }
  };
};

// порожній ШК
template <class T> class A_empty {};

// створення об’єкта вкладеного шаблона
A<int>::A_incl<double, float> inc;

int main() {
 A<int> a(2);
 A_empty<int> em;
}
