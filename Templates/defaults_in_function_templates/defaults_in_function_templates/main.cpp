#include <iostream>
template <class T, class T1>
  T min(T v, T1 v1, char* p = "Min") {
    std::cout << typeid(T).name() << " "
     << typeid(T1).name() << "\n";
    return v;
};

//явне інстанціювання
template char min(char, char, char*);

//неявне інстанціювання
int main() {
  // call double min<double, char>(double, char, char*);
  min(double(3), '1');
  // call char min<char, char>(char, char, char*);
  min('3', '1', "Wow");
  // call float min<float, float>(float, float, char*);
  min((float)3, (float)1);
  // call float min<float, int>(float, int, char*);
  min<float>((float)3, (int)1);
  // call float min<float, int>(float, int, char*);
  min<float,int>((float)3, (int)1);
  }
