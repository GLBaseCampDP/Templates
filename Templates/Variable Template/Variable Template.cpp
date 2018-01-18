// Variable Template.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>


// ��������� ����� ������� �������, ��������� ��������� �� �������. ��� ���� ��� ��������� ����, ������� ����� ������ � ������
// � ������� ���������������, �� ����������� � ����� ���������� 
template<typename ... Args> struct PFun {};


// ������������ ������� ��� ��������� �� ����� �������.
// ��������� ������� ��������� �� R �� Args
template<typename R, typename ... Args>
struct PFun<R(Args ...)> {
	// ��� ��������� �� ������� � ���������� ����������. 
	// ���� ���� ������ ����������������� ��� ����������� ���������
	typedef R(*Type)(Args ...);

	PFun(Type pf) : f(pf) { ; }

	// ��������- ������� ,
	// // ����������� ��������� � ���� ��������� ������
	// � ��������� ���� �������. 
	R operator () (Args ... args)
	{
		// ������ ������� ����� ��������
		// ����������� � ���c�� ��������� 
		return f(args ...);
	}

	Type f;
};

// ��������� ������������� ���������� ������� ��� ��������� �� ������� ����, ������������� �� ��� �� ����� ����������
template<typename T, typename R, typename ... Args>
struct PFun<R(T::*)(Args ...)>
{
	typedef R(T::*Type)(Args ...);
	typedef T HostType;

	PFun(Type fn = NULL, T* obj = NULL) : f(fn), pf(obj) { ; }

	// ��������� ��� �������� ��������� ������ ������� - ��� ������, ����� ������� ������������ ��� ����������, � ����� ������,
	// ��� �������� ���������� �����, ��������� ������ ���������� 
	R operator() (Args... args)
	{
		(pf->*f)(args ...);
	}

	R operator() (T* obj, Args... args)
	{
		(obj->*f)(args ...);
	}

	Type f;
	T* pf;
};

// ������ - ���������
template<typename T> struct A : public PFun<T> {
	A() : PFun<T>(NULL) { }
	A(T f) : PFun<T>(f) { }
};

int PLUS(int a, int b) { return a + b; }
int MINUS(int a, int b) { return a - b; }
//int increment(int& a) { return a++; }

int main() {
	A<int(int, int)> plus(PLUS);
	A<int(int, int)> minus(MINUS);
//	A<int(int&)> inc(increment);

	std::cout << plus(10, 20) << " " << minus(10, 20) << std::endl;

	int a = 100;
//	std::cout << inc(a) << " ";
	std::cout << a << std::endl;
}







