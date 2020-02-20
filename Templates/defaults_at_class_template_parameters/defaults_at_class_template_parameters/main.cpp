// оголошення ШК з параметром
// який приймає аргумент по замовчуванні
template <class T, class Type = int >
class A  {
  public:
    Type i;// член даних
    A() { i = (Type)0; }
    A(Type j) { i = j; }
};

int main() {
// правильні оголошення
 A<int> t1;
 A<char> t2('a');
 A<char, double> t3('a');
 //A<, char> t4('a');  помилка
}
