// Template Class Inheritance.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
#define CLASS(CL,m) T m;\
                    CL() : m(T(0)) { }\
                    CL(T n) { m = n; }
class A {};						// ������� ����
template <class T> struct B : public A  { // �������� ��
	CLASS(B, i);
};

template <class T> struct C {	// �� ��� �����������
	CLASS(C, j);
};
// �������� �� 
// ������: �� B<T> �� ��������� ���� C<char> 
template <class T>struct D : 
	public B<T>, public C<char> {
	CLASS (D,z)
	D(T, T);
	void show();
};
// ctor ��������� ����� 
// ��������� ctors ������
template <class T> D<T>::D(T n1, T n2) :B<T>(n1), z(n2) {}

template <class T> void D<T>::show(){

	cout << "����� ��'����: " << z << ' ' << i << ' ' << j;
}


int main() {
	D<int> d(1, 2);
	d.j = 'a';
	d.show();
    return 0;
}

