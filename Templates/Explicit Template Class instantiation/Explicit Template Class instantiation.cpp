// Explicit Template Class instantiation.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

namespace N {
	// template definition
	template<class T> struct A { void f(T) { } };
}
// ������� ������ ��������������
// template class A<int>; 
using N::A;
template class A<int>;     // ���e ��������������
template class N::A<char*>;// ���e ��������������
						   // ���e �������������� A<double>::f(double)
template void N::A<double>::f(double);
A<int> a; // �����e ��������������
A<char>* p; // �����e ��������������

template<class T> class B;
// ������� ������ ��������������
//template class B<int>; 
// ������� �������� ��������������
//B<char> b; 
B<char>* p0; // �����e ��������������

void main() {
	p->f(1); // call void A<char>::f(char)
}

template<class T> class B {};
