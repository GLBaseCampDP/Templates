#include <iostream>

template <class T, int r = 0> class A
{
  public:
  T i;
  A() { std::cout << r << std::endl; }
};


int main() {
  A<int, 1> x;
  A<int, 2> y;
  A<int> z;
  return 0;
}
