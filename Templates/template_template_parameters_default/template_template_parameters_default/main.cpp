template <class Type = int> struct B2;

template <class Type> struct B1 {
  Type r;
};
// помилка в скопі двічі дефолтк
//template <class Type = int> struct B2 {
template <class Type> struct B2 {
  Type r;
};

template <
 class T1,
 template<class Type = int> class T2
>
struct A {
  T2<> k;
  T2< T1 > d;
  T2<double> d1;
};

int main() {
 A<int, B1> a1;
 A<int, B2> a2;
}

