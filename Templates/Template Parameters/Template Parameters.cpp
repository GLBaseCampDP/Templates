// Template Parameters.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int a[5];
int f(int n) { return n; }

template<int N>struct S { int a[N]; };

template
<
	char c, 		// фундаментальний тип
	int(&ra)[5], 	// (lvalue) посилання на масив
	int(*pf)(int), 	// вказівник на функцію
	int(S<10>::*a)[10] 	// вказівник на поле об’єкта
> struct Complicated
{
	void foo(char base) { ra[4] = pf(c - base); }
};




int main() {
	S<10> s;
	Complicated<'2', a, f, &S<10>::a> c;	    c.foo('0');
    return 0;
}

