#include <iostream>
#include <type_traits>
template<typename T> using TYPE = typename T::type;

template<typename T_1> using eif =
     TYPE<std::enable_if<T_1::value> >;

template<typename T_2, typename T_3 =
    eif<std::is_trivial<T_2> > >

int istrivial(T_2 t) {  return 1;  }

struct A { } a;

int main() {
   std::cout << istrivial(a);
    return 0;
}
