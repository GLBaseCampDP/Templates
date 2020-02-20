#include <iostream>
#include <vector>
template
<
 template <typename, typename...> class TTPack,
 typename Type,
 typename... Types
>
Type Sum(const TTPack<Type, Types...>& arg) {
  Type s = (Type)0;
  for (const auto& v : arg) {

      s += v;
    }
    return s;
}

int main() {
    std::cout << Sum(std::vector<int> { 1, 2, 3 });
    return 0;
}
