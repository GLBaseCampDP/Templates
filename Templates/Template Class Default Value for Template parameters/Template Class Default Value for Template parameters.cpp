// Template Class Default Value for Template parameters.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

// ���������� �� � ���������� 
// ���� ������ �������� �� �����������
template <class T, class Type = int >
class A {
public:
	Type i;// ���� �����
	A() { i = (Type)0; }
	A(Type j) { i = j; }
};

int main() {
	// �������� ����������
	A<int> t1;
	A<char> t2('a');
	A<char, double> t3('a');
	//A<, char> t4('a');  �������
	return 0;
}

template <class T, class Type = int> A<T, Type>::A() { i = (Type)0; }
template <class T, class Type> A<T, Type>::A() { i = (Type)0; }

