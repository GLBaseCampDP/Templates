#include <iostream>
template<typename T1, typename T2> T1 f(T2 f){
  return (T1)0;
};

// неявно інстанціювати неможливо
template<class T1, class T2> void F(void) {
};
void g(double d) {
    int i = f<int>(d); // call f<int,double>(double)
    char c = f<char>(d);//call f<char,double>(double)
    int(*p)(float) = f;//instant.f<int,float>(float)
    F<int, int>(); // call F<int,int>()
    F<char, int>(); // call F<char,int>()
}

int main() {
    g(3.14);
    return 1;
}
