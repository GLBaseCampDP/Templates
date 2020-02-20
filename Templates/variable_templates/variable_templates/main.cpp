#include <vector>
template<class T> struct A { int i; }; 	// базовий шаблон


template<class T> using Vec1 = std::vector< A<T> >; // VT - шаблонний аліас на шаблон


template<class T> using Vec3 = std::vector< A<int> >; // VT - шаблонний аліас на клас


template<class T> using Vec4 = std::vector< int >;    // VT - шаблонний аліас на клас
template<class T>
   constexpr T pi = T(3.1415926535897932385L);  // variable template (VT)

int main()
{
    std::vector< A<int> > v(10);           	// використання шаблону для створення змінної
    v[1] = A<int>();    v[1].i = 5;   	// використання змінної

    Vec1<int> v1(10);                                   // створення змінної такої ж як v
    v1[1] = A<int>();     v1[1].i = 5;                  // використання змінної

    Vec3 <double> v3(10);                                 // змінна така ж як v
    v3[1] = A<int>();     v3[1].i = 5;                    // використання змінної

    Vec4<double> v4(10);                             // змінна створюється як vector<int>
    v4[1] = 5;                                      // використання змінної
    return 0;
}
