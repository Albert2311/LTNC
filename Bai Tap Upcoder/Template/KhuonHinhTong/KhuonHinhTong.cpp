//#include <bits/stdc++.h>
//using namespace std;
//template <typename Temp>
//struct Mang {
//    int n;
//    Temp A[100];
//    Temp& operator[] (int i) {
//        return A[i];
//    }
//    Mang() {
//        n = 0;
//    }
//};
//struct PhanSo {
//    int Tu, Mau;
//    void operator= (PhanSo p) {
//        Tu = p.Tu;
//        Mau = p.Mau;
//    }
//};
//int UCLN(int a, int b) {
//    while (b > 0) {
//        int r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//PhanSo rutGon(PhanSo S) {
//    int a = UCLN(S.Tu, S.Mau);
//    S.Tu /= a;
//    S.Mau /= a;
//    return S;
//}
//istream& operator>> (istream& is, PhanSo& p) {
//    is >> p.Tu >> p.Mau;
//    return is;
//}
//ostream& operator<< (ostream& os, PhanSo p) {
//    os << p.Tu << "/" << p.Mau;
//    return os;
//}
//PhanSo operator+ (PhanSo A, PhanSo B) {
//    PhanSo S;
//    S.Tu = A.Tu * B.Mau + A.Mau * B.Tu;
//    S.Mau = A.Mau * B.Mau;
//    return rutGon(S);
//}
//template <typename Temp>
//Temp tong(Mang<Temp> a) {
//    Temp S = a[0];
//    for (int i = 1; i < a.n; i++) {
//        S = S + a[i];
//    }
//    return S;
//}
//int main() {
//    Mang<int> mangA;
//    Mang<PhanSo> mangB;
//    char Type;
//    while (cin >> Type) {
//        switch (Type) {
//        case 'a': {
//            int X;
//            cin >> X;
//            mangA[mangA.n++] = X;
//            break;
//        }
//        case 'b': {
//            PhanSo ps;
//            cin >> ps;
//            mangB[mangB.n++] = ps;
//            break;
//        }
//        }
//    }
//    if (mangA.n == 0)
//        cout << "khong co";
//    else
//        cout << tong<int>(mangA);
//    cout << endl;
//    if (mangB.n == 0)
//        cout << "khong co";
//    else
//        cout << tong<PhanSo>(mangB);
//    cout << endl;
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//template<typename T>
//struct Mang {
//	T a[1000];
//	int n;
//	char type;
//	T& operator[](int i) {
//		return a[i];
//	}
//	Mang() {
//		n = 0;
//	}
//};
//struct PS {
//	int tu, mau;
//	void operator=(PS a) {
//		tu = a.tu;
//		mau = a.mau;
//	}
//	PS() {
//		tu = 1;
//		mau = 1;
//	}
//};
//int ucln(int a, int b) {
//	while (b > 0) {
//		int x = a % b;
//		a = b;
//		b = x;
//	}
//	return a;
//}
//PS rutGon(PS a) {
//	int x = ucln(a.tu, a.mau);
//	a.tu /= x;
//	a.mau /= x;
//	return a;
//}
//istream& operator>>(istream& is, PS& a) {
//	is >> a.tu >> a.mau;
//	return is;
//}
//ostream& operator<<(ostream& os, PS a) {
//	os << a.tu << "/" << a.mau;
//	return os;
//}
//PS operator+(PS a, PS b) {
//	PS kq;
//	kq.tu = a.tu * b.mau + a.mau * b.tu;
//	kq.mau = a.mau * b.mau;
//	return rutGon(kq);
//}
//template<typename T>
//T tong(Mang<T> a) {
//	T tong = a[0];
//	for (int i = 1; i < a.n; i++) {
//		tong = tong + a[i];
//	}
//	return tong;
//}
//int main() {
//	Mang<int> a;
//	Mang<PS> b;
//	char type;
//	while (cin >> type) {
//		if (type == 'a') {
//			int x;
//			cin >> x;
//			a[a.n++] = x;
//		}
//		else {
//			PS ps;
//			cin >> ps;
//			b[b.n++] = ps;
//		}
//	}
//	if (a.n == 0) {
//		cout << "khong co" << endl;
//	}
//	else {
//		cout << tong(Mang<int>(a)) << endl;
//	}
//	if (b.n == 0) {
//		cout << "khong co" << endl;
//	}
//	else {
//		cout << tong(Mang<PS>(b)) << endl;
//	}
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct Mang {
	char type;
	T a[1000];
	int n;
	T& operator[](int i){
		return a[i];
	}
	Mang() {
		n = 0;
	}
};
struct PS {
	int tu, mau;
	void operator=(PS a) {
		tu = a.tu;
		mau = a.mau;
	}
	PS(){
		tu = 1;
		mau = 1;
	}
};
int ucln(int a, int b) {
	while (b > 0) {
		int x = a % b;
		a = b;
		b = x;
	}
	return a;
}
PS rutGon(PS a) {
	int x = ucln(a.tu, a.mau);
	a.tu /= x;
	a.mau /= x;
	return a;
}
istream& operator>>(istream& is, PS& a) {
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, PS a) {
	os << a.tu << "/" << a.mau;
	return os;
}
PS operator+(PS a, PS b) {
	PS kq;
	kq.tu = a.tu * b.mau + a.mau * b.tu;
	kq.mau = a.mau * b.mau;
	return rutGon(kq);
}
template<typename T>
T tong(Mang<T> a) {
	T tong = a[0];
	for (int i = 1; i < a.n; i++) {
		tong = tong + a[i];
	}
	return tong;
}


int main() {
	Mang<int> a;
	Mang<PS> b;
	char type;
	while (cin >> type) {
		if (type == 'a') {
			int x;
			cin >> x;
			a[a.n++] = x;
		}
		else {
			PS ps;
			cin >> ps;
			b[b.n++] = ps;
		}
	}
	if (a.n == 0) {
		cout << "khong co";
	}
	else
		cout << tong(Mang<int>(a)) << endl;

	if (b.n == 0) {
		cout << "khong co";
	}
	else
		cout << tong(Mang<PS>(b)) << endl;
	return 0;
}
