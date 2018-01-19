// Variadic Template 6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>  

void F() {} // ����������� ������

template<typename T, typename... Types>
void F(const T& arg, const Types&... args)
{
	std::cout << arg;
	F(args...); // arg ��� ��� �� �������������
}


int main()
{
	F('a', 1, 1.3, "Ops");
    return 0;
}

