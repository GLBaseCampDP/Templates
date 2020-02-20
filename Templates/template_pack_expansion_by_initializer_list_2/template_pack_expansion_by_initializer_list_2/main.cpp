#include <utility>
#include <iostream>

template<typename T> int marker(T&& t) {return t;}

template<typename... Types>
 void expand(Types&&... arg){
    // приклад Initializer list
    int m[] = { 0, (int)marker(std::forward<Types>(arg))...
  };

  for (const auto& v : m) {
      std::cout << v << "  ";
  }
}

int main() {
    expand(1, 2, 3);
    return 0;
}
