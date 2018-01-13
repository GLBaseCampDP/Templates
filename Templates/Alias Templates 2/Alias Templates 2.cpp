// Alias Templates 2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
template<typename T> struct B                   
{
	using type = T; // ��������� ����� �� ��������� ��� ������� B
	type i;
};
template<typename B> typename B::type g(const B& c) 
{
	typename B::type n = c.i;// ������������ ����� � ��
	return n;
}
template<typename B> struct P {                      

	typename B::type i;// ������������ ����� � ������ ��
};

int main() {
	B<int> b = { 11 };           // ��������� �ᒺ��� ������� �
	std::cout << g(b) << '\n'; 	  // ������������ ������� �������
	P < B<int> > p = { 12 };    // ��������� �ᒺ��� ������� P 
	std::cout << p.i << '\n';
    return 0;
}



