// Variadic Template And Overloading.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>  
#include <vector>  

#define MES(S) std::cout << "call "<<S<<" Sum - ";

using namespace std;

template<typename ... Types> void Adder(Types...) { } // ������a ����������

template<typename T > T Get(T&& v) {// ������a ����������
	return v;
}

template<typename T, typename ... Types> T Sum(Types... arg) { //1
	MES("1");
	T s = (T)0;
	Adder(s += arg ...);
	return s;
};

template<typename ... Types> int Sum(Types... arg) { //2
	MES("2");
	int s = 0;
	Adder(s += arg ...);
	return s;
};

int Sum(const double val) { //3
	MES("3");
	return 2;
}

template<typename T, typename... Types> T Sum(T& first, Types&&... arg) { //4
	MES("4");
	return first + Get(arg...);
}

int main()
{
	std::cout << Sum((int)1, (int)2, (int)3) << "\n";

	std::cout << Sum<double>((double)1.1, (double)2.2, (double)3.3) << "\n";

	std::cout << Sum(3.3) << "\n";
	double d1 = 1;
	double d2 = 10;
	std::cout << Sum(d1, d2) << "\n";
	system("pause");
	return 0;
}