// Full Spesialization Class Template.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

template <class T> struct A {
  T i;
};
// ����� ������������ ���������� �����
template <> struct A<int> {
	int j;
};

template <typename T>  struct C {
	T i;
};
// ����� ������������ ��������� ������
template <> struct C < A<int> >
{
public: A<int> j;
};

template <typename T, template <typename I> class R>  struct D
{
  R<T> i;
};
// ����� ������������ �������� �����
template <> struct D < int, A > {
 A<int> j;
};
// ���������� ��������� ���������� �����
typedef A<int> _A;
// ������ ������������� �� � �������� �ᒺ���
_A a;
C<_A> c;
D<int, A> d;


int main() {
	a.j = 7;   c.j.j = 8;   d.j.j = 9;
    return 0;
}

