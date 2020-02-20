#include <iostream>
using namespace std;

struct A {
 template<typename T> static const T m1;
 template<typename T> static constexpr T m2 = T(0);
 template<typename T> static T m3;
 template<typename T> static T f(T) { return (T)1; }
};

template<typename T> T F(T) { return 1; }

template<typename T> struct B {
 typedef decltype(&F<T>) type1;
 static constexpr type1 v0 = &F<T>;
 type1 v1 = &F<T>;
 typedef decltype(&A::f<T>) type2;
 type2 v3 = &A::f<T>;
};

template<typename T> const T A::m1 = T(0);
template<typename T> T A::m3 = 0;

int main() {
int i = A::m1<int>;
cout << A::m3<int>;
B<int> b;
B<double>::v0(2);
b.v1(1);
b.v3(2);

return 0;
}
