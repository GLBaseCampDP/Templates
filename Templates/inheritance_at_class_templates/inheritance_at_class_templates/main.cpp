#include <iostream>
#define CLASS(CL,m) T m;\
                    CL() : m(T(0)) { }\
                    CL(T n) { m = n; }
#define TMPLT template <class T>
class A {};// базовий клас

// похідний CT
TMPLT struct B : public A  {
  CLASS(B, i);
};

// CT для наслідування
TMPLT struct C {  CLASS(C, j); };

// похідний CT
// батьки: CT B<T> та шаблонний клас C<char>
TMPLT struct D :
  public B<T>, public C<char> {
   CLASS (D,z)
   D(T, T);
   void show();
};
// ctor похідного класу
// керування ctors батьків
TMPLT  D<T>::D(T n1, T n2) :
  B<T>(n1), z(n2) {}

TMPLT  void D<T>::show(){
  std::cout << "Члени об'єкта: " << z << ' ' << B<T>::i << ' ' << j;
}

int main() {
D<int> d(1, 2);
d.j = 'a';
d.show();
}
