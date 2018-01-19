// Variadic Template 5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>  
template <class T> T&& f(T&& a) { std::cout << a << " "; return a; }

struct marker {
	template<typename ...Types> marker(Types&&...) {}
};
// ���������� �������� ����������� ����� ������ �����������

template<typename... Types> inline void expand(Types&&... arg) {
	
	// ������������ ��������� �������
	marker{ (f(arg), 1)... };
	// ������������ ��������� �������
	//marker{ (std::cout << arg << " ", 1)... };
	// ������������ ������ �������
	marker{ ([&] { std::cout << arg << " "; }(), 1)... };
}



int main()
{
	expand(42, "answer", true);
	system("pause");
	return 0;
}

