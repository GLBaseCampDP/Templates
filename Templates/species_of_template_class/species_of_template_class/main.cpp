#include <iostream>
// попереднє оголошення ШК
template <class Type> class AM;
AM<char>* p1; // на вказівник на об'єкт

// повне оголошення ШК
template <class Type> struct AM {
    Type i;// член даних
    AM() { i = (Type)1; }// конструктор по замовчуванні
    AM(Type j) {i = j;}  // конструктор з аргументами
};

