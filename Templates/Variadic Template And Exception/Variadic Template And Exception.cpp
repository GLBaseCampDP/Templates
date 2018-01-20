// Variadic Template And Exception.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct a1 {};
struct a2 {};
struct a3 {};
/*struct a4 {};
struct a5 {};*/
struct stuff {};

template<class...Types> void F(int arg) throw(Types...) {
	a1 t1;
	a2 t2;
	/*a3 t3;
	a4 t4;
	a5 t5;*/
	stuff st;

	switch (arg) {
	case 1:
		throw t1;
		break;
	case 2:
		throw t2;
		break;
	/*case 3:
		throw t3;
		break;
	case 4:
		throw t4;
		break;
	case 5:
		throw t5;
		break;*/
	default:
		throw st;
		break;
	}
}

int main(void) {
	try {
		// if the throw specification is correctly expanded, none of
		// these calls should trigger an exception that is not expected 
		/*func<a1, a2, a3, a4, a5, stuff>(1);
		func<a1, a2, a3, a4, a5, stuff>(2);
		func<a1, a2, a3, a4, a5, stuff>(3);
		func<a1, a2, a3, a4, a5, stuff>(4);
		func<a1, a2, a3, a4, a5, stuff>(5);
		func<a1, a2, a3, a4, a5, stuff>(99);*/

		F<a1, a2>(1);
	}
	catch (...) {
		return 0;
	}
	return 1;
}

