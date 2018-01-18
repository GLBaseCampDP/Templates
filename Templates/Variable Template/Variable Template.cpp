// Variable Template.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


// Объявляем общий вариант шаблона, хранящего указатель на функцию. При этом все возможные типы, которые могут придти в шаблон
// в процесс инстанцирования, мы упаковываем в пакет параметров 
template<typename ... Args> struct PFun {};


// Спеціалізація шаблону для вказівника на прості функції.
// Сигнатура функції формується із R та Args
template<typename R, typename ... Args>
struct PFun<R(Args ...)> {
	// Тип вказівника на функцію з необхідною сигнатурою. 
	// Змінні типу будуть використовуватись для розгортання параметрів
	typedef R(*Type)(Args ...);

	PFun(Type pf) : f(pf) { ; }

	// Оператор- функтор ,
	// // Розгортання параметрів в набір аргументів методу
	// у хранимого типа функции. 
	R operator () (Args ... args)
	{
		// Виклик функції через вказівник
		// Розгортання в спиcок аргументів 
		return f(args ...);
	}

	Type f;
};

// Объявляем специализацию контейнера функции для указателя на функцию член, конкретезируя всё тот же пакет параметров
template<typename T, typename R, typename ... Args>
struct PFun<R(T::*)(Args ...)>
{
	typedef R(T::*Type)(Args ...);
	typedef T HostType;

	PFun(Type fn = NULL, T* obj = NULL) : f(fn), pf(obj) { ; }

	// Объявляем два варианта оператора вызова функции - для случая, когда функтор используется как «замыкание», и когда объект,
	// для которого вызывается метод, передаётся первым аргументом 
	R operator() (Args... args)
	{
		(pf->*f)(args ...);
	}

	R operator() (T* obj, Args... args)
	{
		(obj->*f)(args ...);
	}

	Type f;
	T* pf;
};

// Шаблон - диспетчер
template<typename T> struct A : public PFun<T> {
	A() : PFun<T>(NULL) { }
	A(T f) : PFun<T>(f) { }
};

int PLUS(int a, int b) { return a + b; }
int MINUS(int a, int b) { return a - b; }
//int increment(int& a) { return a++; }

int main() {
	A<int(int, int)> plus(PLUS);
	A<int(int, int)> minus(MINUS);
//	A<int(int&)> inc(increment);

	std::cout << plus(10, 20) << " " << minus(10, 20) << std::endl;

	int a = 100;
//	std::cout << inc(a) << " ";
	std::cout << a << std::endl;
}







