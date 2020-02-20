#include <iostream>
#include <vector>
template<typename T> struct B {
// створення аліаса на шаблонний тип шаблона B
 using type = T;
 type i; // аlias using
// створення через typedef
 typedef typename
   std::vector<type>::const_iterator iter_t;
   iter_t it; // аlias using
};

template<class B> typename B::type g(const B& c){
  typename B::type n = c.i; // аlias using
  return n;
}

template<typename B> struct P {
  typename B::type i;// використання аліаса
};

int main() {
 B<int> b = { 11 }; //створення об’єкта
 std::cout << g(b) << '\n'; // використання ШФ
 //створення об’єкта типу P
 P < B<int> > p = {12};
 std::cout << p.i << '\n';
}
