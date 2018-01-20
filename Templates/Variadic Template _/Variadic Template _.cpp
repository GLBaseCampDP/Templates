// Variadic Template _.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

// Variable Template.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
#include <functional>
#define TOUT(TT) std::cout<< "Type T is "<<typeid(TT).name() << '\n';
#define CLOUT(TT) std::cout<< "Class -  "<<TT<<'\n';
#define MARK std::cout<< "....................\n";


// ���������� ���������� �������, ���� ���������� �������� �� �������.
// �� ���� ��� ������������� ����������� � parameter pack Types
template<typename ... Types> struct PFun {};


// ������������ ������� ��� ��������� �� ������, 
// R - ��� ����������, Types - ��������� ���������  T - ����
template<typename T, typename R, typename ... Types>
struct PFun<R(T::*)(Types ...)>
{
	// ��� ��������� �� ����� � ���������� ����������. 
	typedef R(_cdecl T::*Type)(Types ...);


	PFun(Type fn = NULL, T* obj = NULL) : f(fn), pf(obj) { CLOUT("PFun<T,R,..>");  TOUT(T); TOUT(R); MARK }
	PFun(T* obj = NULL) : f(NULL), pf(obj) { CLOUT("PFun<T,R,..>");  TOUT(T); TOUT(R); MARK }

	// ������� ��� ��� ������� ������
	R operator() (Types... arg) {
		(pf->*f)(arg ...);
	}
	// ������� ��� �������, ���� ��'���, ����� ����� �����������, � ������ ���������� 
	R operator() (T* obj, Types... arg) {
		(obj->*f)(arg ...);
	}

	Type f;
	T* pf;
};

// ������ - ���������
template<typename T> struct A : public PFun<T> {
	A() : PFun<T>(NULL)
	{
		CLOUT("A<T>, ctor A()");  TOUT(T); MARK;
	}
	A(T f) : PFun<T>(f)
	{
		CLOUT("A<T>, ctor A(T)");  TOUT(T); MARK;
	}
};

int PLUS(int a, int b) { return a + b; }
int MINUS(int a, int b) { return a - b; }
int INCREMNET(int& a) { return a++; }

struct B {
	typedef int(*Type)(int, int);
	Type F;
	int _cdecl  f(int a, int b) { return PLUS(a, b); }
	B(Type f) : F(f) { { CLOUT("B<T>, ctor B(T)");  TOUT(Type); MARK; } }
};

int main() {

	MARK;
	PFun <B, int(_cdecl B::*)(int, int)> plus1(&B::f, &b);

	system("pause");
	return 0;
}







