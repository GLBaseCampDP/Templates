template <class Type> struct B {
  Type r;
};

template <
 class T1,
 template<class Type> class T2 = B
> struct A {
  T1 k; T2< T1 > d;  T2<double> d1;
};

template<
 class T1,
 template <class Type = T1> class T2 = B,
 template <typename Type = double >  class T3 = B
> struct C {
  T2<double> d0; 	T2<> d1;
  T3<double> d2;	T3<> d3;
  B<double> d4;
};

int main() {
 A<int> a1;		 A<int, B> a2;
 C<double> c1;	 C<double, B> c2;
 C<double, B, B> c3;
}

