#include <iostream>

template <class... Types> void foreach(Types... arg)
{
  bool b[] = { [=]() {
                       std::cout << arg << "\n";
                       return true;
                      }()... };
}

int main()
{
    foreach(10, 20.2, true);
    return 0;
}
