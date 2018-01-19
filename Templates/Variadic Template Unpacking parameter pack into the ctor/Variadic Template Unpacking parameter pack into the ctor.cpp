// Variadic Template Unpacking parameter pack into the ctor.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>  
#include <vector>  

using namespace std;
#define OUT(S) std::cout << " ctor " << S <<'\n';

template<class T> struct A : T {
	template<class... Types>
	A(Types... arg) :T(arg...) { OUT("A"); }

};

template<class X, class... Types>
struct B : 	A<X>, B<Types...> {
	template<class... Types1>
	B(Types1... arg) : A<X>(arg...), B<Types...>(arg...) { OUT("B(...)"); }
};

// спеціалізація B
template<class X>
struct B<X> : A<X> {
	template<class... Types>
	B(Types... arg) : A<X>(arg...) { OUT("B<X>"); }
};

template<class... Types>
struct D : public B<Types...> {
	template<class... T1>
	D(T1... arg) : B<Types...>(arg...) { OUT("D(...)"); }
};

struct S1 {
	S1(int, int, int) { OUT("S1"); }
};

struct S2 {
	S2(int, int, int) { OUT("S2"); }
};

int main()
{
	D<S1, S2> d();
	system("pause");
	return 1;
}


