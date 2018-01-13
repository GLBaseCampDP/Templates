// Template Function with Defolt Argument.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

// FucnctionTemplate.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
template <class T, class T1>
T min(T value, T1 value1, char* p = "Min") {
	T v = (T)value1; // використання в тілі шаблонного типу
	if (value<value1) v = value;
	//std::cout << mes << v << "\n";
	std::cout << typeid(T).name() << " " << typeid(T1).name() << "\n";
	return v;
};


//template int min<>(float, int);
//template double min<float>(float, int);
template char min(char, char, char*);

//template double min<>(float);
//template double min<>(float, char, );




//f<>('a'); // instantiates and calls f<char>(char)
//f(7); // instantiates and calls f<int>(int)
//void(*ptr)(std::string) = f; // instantiates f<string>(string)

void main() {
	min(double(3), '1'); // call double min<double, char>(double, char, char*);
	min('3', '1', "Wow"); // call char min<char, char>(char, char, char*);
	min((float)3, (float)1); // call float min<float, float>(float, float, char*);
	//min((float)3, (int)1); // call float min<float, float>(float, float, char*);
	min<float>((float)3, (int)1); // call float min<float, int>(float, int, char*);
	min<float,int>((float)3, (int)1); // call float min<float, int>(float, int, char*);

	system("pause");
}


