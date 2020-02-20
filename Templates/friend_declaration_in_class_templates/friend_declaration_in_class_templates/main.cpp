#include <iostream>
template <class Tf = char> class A_Fr;
class B {};
template <class T>class A;

template <class Tf>struct AA_Fr {
  void show(A<Tf>& a) { a.i = 0; }
};

template <class T>class A {
  T i;
  public:
   friend class A_Fr<>;//дружній шаблонний клас
   friend class A_Fr<T>;//дружній ШК
   friend class B; //дружній сторонній клас
   //дружня ШФ
   template<class TT> friend void FF(A<TT>&, TT);
   friend void AA_Fr<T>::show(A<T>&); //дружній метод ШК
   //дружній метод шаблонного класу
   friend void AA_Fr<long>::show(A<long>&);
   friend void f(A<int>&, int); //дружня функція
   // friend void f(A<T>&, T); немає способу реалізації
   A() { i = T(0); }
   A(T j) { i = j; }
};


template <class Tf>struct A_Fr {
  A_Fr() { }
  void show(A<Tf>&);
};

// доступ з функції дружнього ШК
template <class Tf>void A_Fr<Tf>::show(A<Tf>& a) {
 std::cout << "Private member of friend class: " << "\n"
  << "Private member of main class: " << a.i
  << "\n" << "-----------" << "\n";
}

void f(A<int>& a, int i) { a.i = i; }

int main() {
  A<int> a(1);
  A_Fr<int> a_i; a_i.show(a);
  AA_Fr<int> a1; a1.show(a);

  A_Fr<> a_c;
  A<char> a_c_f('b');
  a_c.show(a_c_f);
}
