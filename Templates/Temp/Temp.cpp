// Temp.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>  

using namespace std;
// ��, ��� �������� ������ ���������
template<typename ... T> void ignore(T...) { }

// ��, ��� ������ ������ ���������
template<typename ... T> int Sum(T... nums)
{
	int s = 0;
	ignore(s += nums ...);
	return s;
}

// ��, ��� ������ ������ ���������
template<typename Type, typename ... T> Type Sum1(T... nums)
{
	Type s = 0;
	ignore(s += nums ...);
	return s;
}

// ��, ��� ������ ������ ���������
template<int...cnt> int Sum2((&...arr)[cnt])
{
	int s = 0;
	ignore(s += cnt ...);
	return s;
}

// �������� �� �� ��������� ������
template<typename ... T> bool is_Pos(T... nums)
{
	bool is_pos = true;
	ignore(is_pos = is_pos && nums >= 0 ...);
	return is_pos;
}

int main()
{
	std::cout << Sum(1, 2, 3) << "  " << Sum1<double>(1.1, 2.2, 3.3);

	system("pause");
	return 0;
}

