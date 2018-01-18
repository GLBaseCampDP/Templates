// VirtualFunction in Template Class.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

#define FBODY(S1, S2) { std::cout << " Template Class "<<S1<<": " << S2 << '\n'; }
template <class T> struct A {
	// ��������� ��������� ������� � �������� ��
	virtual void show() FBODY("A", "show()" )
	virtual void show(T) FBODY("A", "show(T)");
	void show(T, T) FBODY("A", "show(T, T)");
};
template <class T> struct B : public A<T> {
	// ������������� ��������� ������� � ��������� ��
	void show() FBODY("B", "show()");
	void show(T) FBODY("B", "show(T)");
	virtual void show(T, T) FBODY("B", "show(T, T)");
};

// ���� �� ��������� A<int>
void F(A<int>& t) {
	t.show();
	t.show((int)1);
	t.show(1, 1);
}


int main()
{
	A<int> x;
	B<int> y;
	F(x); F(y);
	B<double> d;
	// F(d);  ����������� ������ - �� �������� ��� ��������� 
	system("pause");
    return 0;
}

