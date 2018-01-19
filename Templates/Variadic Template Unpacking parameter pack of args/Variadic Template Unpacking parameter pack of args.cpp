// Variadic Template Unpacking parameter pack of args.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>  
#include <vector>  


using namespace std;
// ШФ, яка розгорта список параметрів
template<typename ... T> void ignore(T...) { } // маркер розширення

// ШФ, яка приймає список параметрів
template<typename ... T> int Sum(T... nums)
{
	int s = 0;
	ignore(s += nums ...);
	return s;
};


// ШФ, яка приймає список параметрів
template<typename Type, typename ... T> Type Sum1(T... nums)
{
	Type s = 0;
	ignore(s += nums ...);
	return s;
};

template<typename T > T Adder(T v) {
	return v;
}
// ШФ, яка приймає список параметрів
template<typename T, typename... Args> T Adder(T first, Args... args) {
	return first + Adder(args...);
}


//template<typename T = int> T Adder2(T v) {
//	return v;
//}
// ШФ, яка приймає список параметрів з дефолтом
//template<typename T = int, typename... Args = int> T Adder2(T first, Args... args) {
//	return first + Adder2(args...);
//}

/*// ШФ, яка приймає список параметрів
template<int...cnt> int Sum3(const_cast<const int*>(&cnt)... )
{
int s = 0;
ignore(s += cnt ...);
return s;
};*/


template <template <typename, typename...> class TContainer, typename TValue, typename... Args>
	TValue Sum2(const TContainer<TValue, Args...>& c) 
	{
	  TValue s = (TValue)0;
	  for (const auto& v : c) {
		s += v;
	  }
	  return s;
}

template < typename... Types, template <typename...> class T  > 
void bar(const T<Types...>&) 
{
	unsigned cnt = sizeof...(Types);

	std::cout << sizeof...(Types) << std::endl;

};

// перевірка чи   усі аргументи додатні
template<typename ... T> bool is_Pos(T... nums)
{
	bool is_pos = true;
	ignore(is_pos = is_pos && nums >= 0 ...);
	return is_pos;
};

template<typename Type,typename ... Types> Type unpack(Types...i) { return (Type)i; }

template <typename Type, typename... Types>
struct V {


	template<class... __Args> V(__Args...) {  
		std::cout << "Ctor V (" << typeid(Type).name() << ")\n";
		a.push_back(unpack<Type>(__Args...));
	}
	//V(Type t, Types... nums) { }
	void add(Types... nums) { a.push_back( unpack(Types...) ); }
	//	void operator()(Types... nums) { a.push_back(nums); }
	std::vector<Type> a;
};

int main()
{
	std::cout << Sum(1, 2, 3) << "  " << Sum1<double>(1.1, 2.2, 3.3) << "  " <<
		Sum2(std::vector<int> { 1, 2, 3 }) << "  " << Adder<double>(1.1, 2.2, 3.3) <<
		"  ";
	V<int> v(1, 2, 3, 4); //v.add(1, 2,3,4);
	std::vector<int> a = { 5, 6, 7 };


	system("pause");
	return 0;
}

