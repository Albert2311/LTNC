//#include <iostream>
//using namespace std;
//template <typename Temp>
//struct M1C {
//    int n;
//    Temp a[100];
//    void operator= (M1C A) {
//        n = A.n;
//        for (int i = 0; i < n; i++) {
//            a[i] = A[i];
//        }
//    }
//    Temp& operator[] (int i) {
//        return a[i];
//    }
//    M1C() {
//        n = 0;
//    }
//
//};
//M1C<int> a;
//template <typename Temp>
//void xuat(M1C<Temp> a) {
//    for (int i = 0; i < a.n; i++) {
//        cout << a[i] << " ";
//    }
//}
//int tong(M1C<int> a) {
//    int Tong = a[0];
//    for (int i = 1; i < a.n; i++) {
//        Tong = Tong + a[i];
//    }
//    return Tong;
//}
//template <typename Temp>
//void xuat() {
//    cout << tong(a);
//}
//template <typename Temp>
//void nhap(M1C<Temp>& a) {
//    a.n = 0;
//    int b;
//    while (cin >> b) {
//        a[a.n++] = b;
//    }
//    xuat<Temp>();
//}
//int main() {
//    nhap<int>(a);
//    return 0;
//}
//



//#include<bits/stdc++.h>
//using namespace std;
//
//template<typename T>
//struct M1C {
//	T a[1000];
//	int n;
//	T& operator[](int i) {
//		return a[i];
//	}
//	T& operator=(M1C b) {
//		n = a.n;
//		for (int i = 0; i < a.n; i++) {
//			a[i] = b[i];
//		}
//	}
//	M1C() {
//		n = 0;
//	}
//};
//template<typename T>
//int tong(M1C<T> a) {
//	T tong = a[0];
//	for (int i = 1; i < a.n; i++) {
//		tong = tong + a[i];
//	}
//	return tong;
//}
//template<typename T>
//void xuatM(M1C<T> a) {
//	cout << tong(a);
//}
//template<typename T>
//void nhapM(M1C<T> a) {
//	a.n = 0;
//	int x = 0;
//	while ( cin >> x){
//		a[a.n++] = x;
//	}
//	xuatM(a);
//}
//
//int main() {
//	M1C<int> a;
//	nhapM(M1C<int>(a));
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

template<typename T>
struct Mang {
	T a[1000];
	int n;
	T& operator[](int i) {
		return a[i];
	}
	Mang() {
		n = 0;
	}
};
template<typename T>
T tong(Mang<T> a) {
	T tong = a[0];
	for (int i = 1; i < a.n; i++) {
		tong = tong + a[i];
	}
	return tong;
}
template<typename T>
void xuat(Mang<T> a) {
	cout << tong(a);
}
template<typename T>
void nhap(Mang<T> a) {
	int x;
	while (cin >> x) {
		a[a.n++] = x;
	}
	xuat(a);
}

int main() {
	Mang<int> a;
	nhap(Mang<int> (a));
	return 0;
}