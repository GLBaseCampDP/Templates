#include <iostream>

template<int v> struct value {
  operator int() { return v; }
};

template <typename...Types> struct container {
  container() {
    int array[sizeof...(Types)] = { Types()... };
    std::cout<<"container<";
    for (int count = 0; count<sizeof...(Types);
        count++) {
     if (count>0) {
       std::cout << ",";
     }
     std::cout << array[count];
    }
    std::cout << ">\n";
  }
};
template<class A, class B, typename...Types>
void func(A arg1, B arg2, Types...arg3) {
// приклад Template argument list
container<A, B, Types...> t1;  // 1 <99,98,3,4,5,6>
container<Types..., A, B> t2;  // 2 <3,4,5,6,99,98>
container<A, Types..., B> t3;  // 3 <99,3,4,5,6,98>
//в тілі варіативної функції було
// декілька розгортань parameter pack
}

int main() {
  value<99> v99;
  value<98> v98;
  value<3> v3;
  value<4> v4;
  value<5> v5;
  value<6> v6;
  func(v99, v98, v3, v4, v5, v6);
  return 0;
}
