#include "stdafx.h"
#include <iostream>
#include "A.h"

void g() {
	std::cout << "Hi\n";
}

template <class T> void A<T>::f() {
	g();
}