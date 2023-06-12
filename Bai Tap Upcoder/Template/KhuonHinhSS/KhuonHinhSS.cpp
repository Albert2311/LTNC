//#include <iostream>
//#include <math.h>
//#include <iomanip>
//using namespace std;
//struct PhanSo {
//    int Tu, Mau;
//    void operator= (PhanSo p) {
//        Tu = p.Tu;
//        Mau = p.Mau;
//    }
//    PhanSo() {
//        Tu = 0;
//        Mau = 1;
//    }
//};
//istream& operator>> (istream& is, PhanSo& p) {
//    is >> p.Tu >> p.Mau;
//    return is;
//}
//ostream& operator<< (ostream& os, PhanSo p) {
//    os << p.Tu << "/" << p.Mau;
//    return os;
//}
//bool operator== (PhanSo A, PhanSo B) {
//    return A.Tu * B.Mau == A.Mau * B.Tu;
//}
//template <typename Temp>
//void nhap() {
//    Temp a, b;
//    cin >> a >> b;
//    if (a == b)
//        cout << "true";
//    else
//        cout << "false";
//}
//int main() {
//    char Type;
//    cin >> Type;
//    switch (Type) {
//    case 'a':
//        nhap<int>();
//        break;
//    case 'b':
//        nhap<float>();
//        break;
//    case 'c':
//        nhap<PhanSo>();
//        break;
//    }
//    return 0;
//}
//
//




#include<bits/stdc++.h>
using namespace std;
struct PS {
	int tu, mau;
	void operator=(PS a) {
		tu = a.tu;
		mau = a.mau;
	}
};
istream& operator>>(istream& is, PS& a) {
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, PS a) {
	os << a.tu << "/" << a.mau;
	return os;
}
bool operator==(PS a, PS b) {
	return a.tu * b.mau == a.mau * b.tu;
}
	
template<typename T>
void xuat(T a, T b) {
	if (a == b) {
		cout << "true";
	}
	else
		cout << "false";
}

template<typename T>
void nhap() {
	T a, b;
	cin >> a >> b;
	xuat(a,b);
}


int main() {
	char type;
	cin >> type;
	if (type == 'a') {
		nhap<int>();
	}
	else if (type == 'b') {
		nhap<float>();
	}
	else
		nhap<PS>();
	return 0;
}

