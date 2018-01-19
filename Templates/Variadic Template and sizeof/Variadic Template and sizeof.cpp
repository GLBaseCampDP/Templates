// Variadic Template and sizeof.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>  
#define OUT(ob) for (int n = 0; n < a::count; ++n)\
  std::cout<< " " << a::ob[n]<< " ";  std::cout << "\n";
//������ �� ������ ������� ���������
//non-template parameter pack
template<int ... arg> struct Array {
	// ������� ������ 
	// ��������� ����� ������� ���������
	static int m[sizeof...(arg)];
	static int m1[sizeof...(arg)];
	//��������� ������ 
	enum { count = sizeof ... (arg) };
};
// ���������� ��������� ������
// ����� ����������� ������ - Initializer list
template<int ... arg> int Array<arg ...>::m[] =
{ arg ... };
template<int ... arg> int Array<arg ...>::m1[] =
{ 2 * arg ... };

void main() {
	typedef Array<10, 20, 30, 40, 50> a;
	std::cout << " " << a::count << std::endl;
	OUT(m);        OUT(m1);
	system("pause");
}
