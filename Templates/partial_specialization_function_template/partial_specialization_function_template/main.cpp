#include <iostream>
#define OUT(S,v) std::cout <<S << "Min is : " \
  << v << "\n";

// оголошення ШФ із звичайною спеціалізацією
template <class T, class T2> T min(T v1, T2 v2){
  T v = (v1< (T)v2) ? v1 : (T)v2;
  OUT("min<T, T2> - ", v);
  return v;
};
// Часткова спеціалізацією
template <class T> T min(T v1, int v2) {
  OUT("min<T, int> - ", v1);
  return v1;
};

int main() {
  min((int)1, (int)2); // call min<T,int>
  min((int)1, (float)2);// call min<T,T>
  min((float)1, (int)2);// call min<T,int>
}
