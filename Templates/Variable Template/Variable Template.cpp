// Variable Template.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
#include <functional>
using namespace std;
//#define TOUT(TT) cout<< "Type T is "<<typeid(TT).name() << '\n';
#define CLOUT(TT) cout<< "Class -  "<<TT<<'\n';
#define MARK cout<< "....................\n";
#define OUT cout<< "Type T is "<<typeid(T).name() << '\n'; MARK;


// Оголошення загального шаблону, який 
// зберігатиме вказівник на функцію.Усі типи для 
//інстаціювання вкладаються в parameter pack Types
template<typename ... Types> struct PFun {};
// Спеціалізація шаблону для вказівників на прості 
// функції. T(*)Types - сигнатура функції
template<typename T, typename ... Types>
struct PFun<T(Types ...)> {
	// Тип вказівника на функцію з необхідною 
	//сигнатурою. Змінні типу будуть використовуватись 
	//для розгортання параметрів
	typedef T(*Type)(Types...);

	PFun(Type pf) : f(pf) {	CLOUT("PFun<T,..>"); OUT;}

	// Функтор,у ньому розгартаються параметри шаблону 
	// у набір аргументів,які є вказівником на функцію
	T operator () (Types ... arg) {
		// Виклик функції і розгортання набору аргументів 
		return f(arg ...);
	}

	Type f;
};


// Шаблон - диспетчер
template<typename T> struct A : public PFun<T> {
	A() : PFun<T>(NULL) {CLOUT("A<T>, ctor A()");  OUT;	}
	A(T f) : PFun<T>(f) {CLOUT("A<T>, ctor A(T)");  OUT;}
};

int PLUS(int a, int b) { return a + b; }
int INCREMNET(int& a) { return a++; }


int main() {
	PFun<int(int, int)> aa(PLUS);
	cout << " PFun<int(int, int)>(" << typeid(aa.f).name() << ") plus: " << aa.f(1, 2) << '\n';
	MARK;
	typedef A<int(int, int)> AINT;
	AINT plus(PLUS);
	
	A<int(int&)> inc(INCREMNET);
	int a = 100; // змінна для inc, оскільки ref параметер
	cout << " plus: " << plus(10, 20) << " inc: " << inc(a) << '\n';
	cout << " after inc - a: " << a << '\n';
	MARK;

	//виклик через обгортку на метод
	auto p = mem_fn<AINT::Type>(&AINT::f);
	cout << " p(mem_fn) plus: " << p(plus)(1, 2) << '\n';
	MARK;
	//виклик через вказівник на метод
	AINT::Type AINT::*p2 = &AINT::f;
	cout << " p(" << typeid(p2).name() << ") plus: " << (plus.*p2)(1, 2) << '\n';
	MARK;

	system("pause");
	return 0;
}







