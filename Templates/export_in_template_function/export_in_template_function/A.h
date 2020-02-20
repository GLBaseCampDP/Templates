#ifndef A_H
#define A_H


#include <iostream>
void trace() {std::cout << "File 2\n";}

export template <class T>
  T const& min(T const &a, T const &b) {
    trace();
    return a<b ? a : b;
}

#endif // A_H
