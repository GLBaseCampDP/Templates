#include <iostream>
void print() { std::cout << "_"<< std::endl; } //1

template <typename T> void print(const T& i) //2
{std::cout << i << std::endl; }

template <typename T, typename... Types> //3
void print(const T& i, const Types&... arg) {
  std::cout << i << "! ";
  // рекурсія для розгортання набору аргументів
  print(arg...);
}

template <typename T, typename... Types>
struct A {
void print1(const T& i, const Types&... arg) {//4
  std::cout << i << ", ";
  print(arg...);// calls - 3
}
void print2(T i, Types... arg) {
  std::cout << i << ", ";
  print(arg...);// calls - 3
}
void print3(T* i, Types... arg) {}
void print4(T&& i, Types*... arg) {}
};

int main() {
    print(); // call - 1
    print(1); // calls - 2
    print(10, 20); // calls - 3
    print(100, 200, 300); // calls - 3
    print("first", 2, "third", 3.14159);
    A<char*, int, char*, double> a1;
    a1.print1("first", 2, "third", 3.14159);
    A<char*, int, short, double> a2;
    a2.print2((char*)"***", 2, 10, 3.14159);
}
