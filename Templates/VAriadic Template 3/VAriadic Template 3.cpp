// VAriadic Template 3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>  

template<typename... Types> inline void marker(Types&&...) {}

template <class T> T&& f(T&& a) { std::cout << a << " "; return a; }

template<typename... Types> inline void expand(Types&&... arg) {
	marker(f(arg)...); // f(arg) ������ ����� �������
}





int main()
{
	expand(42, "answer", true);
	system("pause");
    return 0;
}

