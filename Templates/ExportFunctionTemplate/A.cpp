#include "stdafx.h"

#include <iostream> 

static void trace() { std::cout << "File 2\n"; }

//The definition
export template <class T> T const& min(T const &a, T const &b) {
//template <class T> T const& min(T const &a, T const &b) {
	trace();
	return a<b ? a : b;
}