// Template Parameters.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

int a[5];
int f(int n) { return n; }

template<int N>struct S { int a[N]; };

template
<
	char c, 		// ��������������� ���
	int(&ra)[5], 	// (lvalue) ��������� �� �����
	int(*pf)(int), 	// �������� �� �������
	int(S<10>::*a)[10] 	// �������� �� ���� �ᒺ���
> struct Complicated
{
	void foo(char base) { ra[4] = pf(c - base); }
};




int main() {
	S<10> s;
	Complicated<'2', a, f, &S<10>::a> c;	    c.foo('0');
    return 0;
}

