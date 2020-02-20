// main file
#include <iostream>
#include "A.h"
#include "B.hpp"

//void trace() ;
// Declaration only
template <class T>
    T const& min(T const&, T const&);
template <class T>
        T const& max(T const&, T const&);
int main() {
  trace();
  return min(2, 3);
}
