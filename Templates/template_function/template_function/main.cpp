#include <iostream>
template <class T, class T1>// прототип ШФ
  T min(T value, T1 value1, const char*);

struct A {
  bool operator <(A& ) { return true; }
};

std::ostream& operator<< (std::ostream& s, A&) {
  s << "Wow";
  return s;
}

int main() {
  int j = 2; float f = 0.5; char c = 'a';
  A a, b;
  const char* mes = "Min value is: ";
  // використання з даними різних типів
    min(f, j, mes);
    min(f, c, mes);
    min(a, b, mes);
    min<double, double>(f, c, mes);
}

// оголошення ШФ
template <class T, class T1>
   T min(T value, T1 value1, const char* mes) {
  // використання в тілі шаблонного типу
     T v = (T)value1;
     if (value<value1) v = value;
     std::cout << mes << v << "\n";
     return v;
  };
