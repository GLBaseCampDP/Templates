// Template Classes.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

// �������� ���������� ��
template <class Type> class AM;

AM<char>* p1; // �� �������� �� ��'���

			   // ����� ���������� ��
template <class Type> struct AM {
	Type i;	// ���� �����
	AM() { i = (Type)1; }	// ����������� �� �����������
	AM(Type j) {         	// ����������� � �����������
		i = j;
	}
};

// �������� ��
template <class T, class T1 = int> struct A {
	T i;             // ���� �����
	AM<T> am;     // ��'��� ��
	AM<int> aam;     // ��'��� ���������� �����
	AM<char>* p;    // �������� �� ��������� ����
	//AM<long>;       // ��������� ��������� ����
	A();            // ������������ ��
	A(T j);
	~A() { delete p; } // ���������� ��

						// ��������� ������
	template <class T3, class T2> struct A_incl {
		T2 b;
		T3 f() { return (T3)0; }
	};
};

/* ��������� ������������ � ������������ ��������� ������������� ��'����-����� � ������������ ����� ��
*/
template <class T, class T1 = int>
A<T, T1>::A() :aam() {
	p = new AM<char>('a');        	i = aam.i; am.i = ++i;
}
template <class T, class T1 = int>
A<T, T1>::A(T j) : aam(j) {
	p = new AM<char>('b'); 		i = -aam.i; am.i = --i;
}
// ������� ��
template <class T> class A_empty {};

// ��������� �ᒺ��� ���������� ������� 
A<int>::A_incl<double, float> inc;

void main()
{
	A<int> a(2);
	std::cout << "Object: " << a.i << "\n" <<
		"Object as class member: " << a.aam.i << "\n" <<
		"Object as class member: " << a.am.i << "\n" <<
		"Pointer to Object as class member object: " << a.p->i << "\n";
	A_empty<int> em;
}


