#include <iostream>

auto Out = [](auto Get) {
  return [=](auto&& ... ts) {
      Get(std::forward<decltype(ts)>(ts)...);
      return [=]() {
         Get(ts ...);
      };
  } ;
};


auto p = Out([](auto v1, auto v2, auto v3)
{ std::cout << v1 << v2 << v3; });
int main() {
auto q = p(1, 'a', 3.14);
q();
}
