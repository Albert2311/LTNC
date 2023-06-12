//#include <bits/stdc++.h>
//using namespace std;
//
//int ucln(int a, int b) {
//    while (b > 0) {
//        int r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//
//struct PS {
//    int tu, mau;
//    void operator= (PS a) {
//        tu = a.tu;
//        mau = a.mau;
//    }
//};
//void rutgon(PS& a) {
//    int u = ucln(a.tu, a.mau);
//    a.tu /= u;
//    a.mau /= u;
//}
//istream& operator>> (istream& is, PS& a) {
//    is >> a.tu >> a.mau;
//    rutgon(a);
//    return is;
//}
//ostream& operator<< (ostream& os, PS a) {
//    os << a.tu << "/" << a.mau;
//    return os;
//}
//bool operator< (PS a, PS b) {
//    return (float)a.tu / a.mau < (float)b.tu / b.mau;
//}
//
//template<typename Temp>
//void input() {
//    Temp a, b, c;
//    cin >> a >> b >> c;
//    if (a < b) a = b;
//    if (a < c) a = c;
//    cout << a;
//}
//
//int main() {
//    char x;
//    cin >> x;
//    if (x == 'a') input<int>();
//    else if (x == 'b') input<float>();
//    else input<PS>();
//    return 0;
//}
//
//


#include <bits/stdc++.h>
using namespace std;

struct PS {
	int tu, mau;
};
int ucln(int a, int b) {
	int x;
	while (b > 0) {
		x = a % b;
		a = b;
		b = x;
	}
	return a;
}
void rutGon(PS a) {
	int x = ucln(a.tu, a.mau);
	a.tu /= x;
	a.mau /= x;
}
istream& operator>>(istream& is, PS& a) {
	is >> a.tu >> a.mau;
	return is;
}
ostream& operator<<(ostream& os, PS& a) {
	os << a.tu << "/" << a.mau;
	rutGon(a);
	return os;
}
bool operator<(PS a, PS b) {
	return (float)a.tu / a.mau < (float)b.tu / b.mau ;
}
template <typename T>
void input() {
	T a, b, c;
	cin >> a >> b >> c;
	T max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	cout << max;
}
	

int main() {
	char a;
	cin >> a;
	if (a == 'a') {
		input<int>();
	}
	else if (a == 'b') {
		input<float>();
	}
	else if (a == 'c') { input<PS>(); }

	return 0;
}