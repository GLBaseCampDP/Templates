// Template Class Type Problem.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
template<class T, int* p> class A {};
template<int& C> struct B {};

int a[10];
struct S {
	int m;
	static int p;
} s;
// A<int, "Wow"> a1; �������: ��������� ������
// A<int, &a[2]> a3;   �������: ������� ������
// A<char, &s.m> a4;    �������: ����������� �ᒺ��

A<int, (a)> a4;   // ok: 
A<char, (&S::p) > a5;  // ok: address of static member



int* pc;
int cc;
int& ccc = cc;
const int c = 1;
int main() {
	// A<int, 1> a6;      �������: ���������� �ᒺ��
	// ������� A<short, (char*)c> a7;  A<short, (char*)&c> a8;  A<short, pc> a9; A<short, pc> a10;
	A<short, &cc> a11;

	const int c0 = 1;
	int c00 = 1;
	// ������� - B<&c> b1; 	B<c> b2; B<c0> b3;  B<ccc> b4;  B<c00> b5;
	B<cc> b4;
	return 0;
}




