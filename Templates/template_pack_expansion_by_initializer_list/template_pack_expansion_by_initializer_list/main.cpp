#include <iostream>

template <class T> T&& f(T&& a)
  { std::cout << a << " "; return a; }

struct marker {
  template<typename ...Types> marker(Types&&...)
   {}
};

// керуванням порядком розгортання через списки ініціалізації
template<typename... Types>
inline void expand(Types&&... arg) {
  // використання сторонньої функції
  // у форматі списку ініціалізації
  marker{ (f(arg), 1)... };
  // використання вбудованої функції
  //marker{ (std::cout << arg << " ", 1)... };
  // використання лямбда функції
  marker{ ([&] { std::cout << arg << " "; }(),
               1)... };
}

int main() {
      expand(42, "answer", true);
      return 0;
}
