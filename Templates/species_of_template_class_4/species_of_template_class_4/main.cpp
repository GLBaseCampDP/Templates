#include <iostream>
#include <typeinfo>
#define I(s) typeid(s).name()
#define E ")>\n";
#define II(s) << I(s) <<
using namespace std;
template<typename T> struct A {   T i;
  A(T j) : i{ j }  {}
// метод ШК
  void f (T){cout <<"A<" II(T) ">::f(" II(T) E;}
// ШФ, який є методом ШК
  template<typename T1> void F(T1 ) {
  cout <<"A<" II(T) ">::F<" II(T1) ">(" II(T1) E;
  }
// ШФ, який є статичним методом ШК
  template<typename T1> static void F0(T1) {
    cout << "A<" II(T) ">::F0<" II(T1) ">(" II(T1) E;
  }
  // Вкладений ШК
  template<typename T1> struct B {   T1 i;
  // ШФ, який є статичним методом вкладеного ШК
    static void show(T1) {
        cout << "A<" II(T) ">::B<" II(T1)
            ">::show(" II(T1) E;
    }
  };
};

int main() {
    A<int> a(5); a.f(a.i);
    A<short> a1(6);
    a1.F<int>(1);
    A<double>::F0<char>(7);
    A<char>::B<long>::show(8);
}
