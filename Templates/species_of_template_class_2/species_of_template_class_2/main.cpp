#include <iostream>

template <class Type> struct AM {
 Type i;// член даних
 AM() { i = (Type)1; }// ctor по замовчуванні
 AM(Type j) {i = j;}  // ctor з аргументами
};

// основний ШК
template <class T, class T1 = int> struct A {
 T i;            // член даних
 AM<T> am;       // об'єкт шаблону
 AM<int> aam;    // об'єкт шаблонного класу
 AM<char>* p;    // ptr на шаблонний клас
  A(); A(T );    // ctors
  ~A() { delete p; } // деструктор ШК
};

/* реалізації ctors з передаванням аргументів конструкторам об'єктів-членів */
template <class T, class T1>
  A<T, T1>::A() : aam() {
    p = new AM<char>('a');  am.i = (T)0;
  }

template <class T, class T1>
  A<T, T1>::A(T j) : am(j), i(j) {
   p = new AM<char>('b'); aam.i = (int)j;
  }

int main() {
 A<int> a(2);
 std::cout <<"a.i: "<<a.i<<"\n"<<"aam.i: "<<
  a.aam.i<<"\n"<<"am.i : "<<a.am.i<< "\n" <<
  "p->i: " << a.p->i;
}
