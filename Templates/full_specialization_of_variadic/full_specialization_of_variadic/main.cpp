#include <iostream>
template <int... Ts> struct A {
  A()
  {
      std::cout << "A<int... Ts>\n";
  }
};

template <> struct A<3, 2> {
    A()
    {
       std::cout << "A<3, 2>\n";
    }
  };

int main()  {
    A<3, 2> x;
    A<2, 3> x1;
    A<2, 3, 5, 6> x2;
}
