#include <iostream>
#include <cstring>
#define OUT(S) std::cout << S << "\n";
const char* mes = "Min is: ";

// прототип ШФ
template <class T, class T1>
  T min(T& v1, T1& v2, const char* mes) {
    OUT(" min<T& v1, T1& v2, const char*>");
    return v1;
};
// перевантаження ШФ
template <class T> T min(T& v1, const char* mes){
  OUT(" min<T& v1, const char*>");
  return v1;
};
  // перевантаження ШФ
int min(const char* v1, const char* v2) {
    OUT(" min(const char*, const char*)");
    return (strlen(v1)<strlen(v2)) ? 1 : 2;
}

int main() {
    float f = 0.5; float c = 1.5;
    min(f, c, mes);      // виклик екземпляра ШФ
    min(f, mes);        // виклик
    // перевантаж.екземпляра ШФ
    min("aaa", "bbb");  // виклик перевантаж. функції
}
