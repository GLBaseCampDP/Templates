#include "B.hpp"

void trace_B() {std::cout << "File 2\n";}

export template <class T>
  T const& max(T const &a, T const &b) {
    trace_B();
    return a > b ? a : b;
}
