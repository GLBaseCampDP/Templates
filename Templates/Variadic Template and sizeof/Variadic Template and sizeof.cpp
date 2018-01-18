// Variadic Template and sizeof.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>  

using namespace std;

#define OUT(ob) for (int n = 0; n < a::count; ++n)\
                  std::cout << a::ob[n] << " ";\
                 std::cout << "\n";

//������ �� ������ ������� ���������
template<int ... Args> struct Array
{

	//��������� ��� ��������� ����� ������� ���������
	static int m[sizeof...(Args)];
	static int m1[sizeof...(Args)];
	//��������� ������ 
	enum { count = sizeof ... (Args) };
};
// ������������ �������� �����
// ����� ����������� ������
template<int ... Args> int Array<Args ...>::m[] = { Args ... };
template<int ... Args> int Array<Args ...>::m1[] = { 2 * Args ... };

int main()
{
	typedef Array<10, 20, 30, 40, 50> a;
	std::cout << a::count << std::endl;
	OUT(m);
	OUT(m1);
	system("pause");
	return 0;
}

