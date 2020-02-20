#include <iostream>

#define OUT(S,v) std::cout << S << "Min is : " \
  << v << "\n";

// оголошення ШФ із звичайною спеціалізацією
template <class T, class T2> T min(T v1, T2 v2) {
  T v = (v1< (T)v2) ? v1 : (T)v2;
  OUT("min<T, T2> - ",v);
  return v;
};
// Повна спеціалізація
template <> int min<int, int>(int v1, int v2){
  int v = (v1<v2) ? v1 : v2;
  OUT("min<int, int> - ", v);
  return v;
};
// Повна спеціалізація
template <> int min<int, double>(int v1, double v2) {
  OUT("min<int, double> - ", (int)v2);
  return (int)v2;
};

int main() {
  min((int)1, (int)0);
  min((int)1, (float)3);
  min(float(1), float(2));
  min(int(1), double(4));
}
