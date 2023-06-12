//#include <bits/stdc++.h>
//using namespace std;
//
//struct CHUSOCHAN {
//    string a;
//};
//istream& operator>> (istream& is, CHUSOCHAN& c) {
//    is >> c.a;
//    return is;
//}
//ostream& operator<< (ostream& os, CHUSOCHAN c) {
//    for (int i = 0; i < c.a.size(); i += 2)
//        os << c.a[i];
//    return os;
//}
//bool operator< (CHUSOCHAN a, CHUSOCHAN b) {
//    int A = 0;
//    int B = 0;
//    for (int i = 0; i < a.a.size(); i += 2)
//        A = A * 10 + (a.a[i] - 48);
//    for (int i = 0; i < b.a.size(); i += 2)
//        B = B * 10 + (b.a[i] - 48);
//    return A < B;
//}
//
//int tongThanhPhan(CHUSOCHAN a, int type = 0) {
//    int A = 0;
//    if (type == 0) 
//        for (int i = 0; i < a.a.size(); i += 2)
//            A = A + (a.a[i] - 48);
//    else
//        for (int i = 1; i < a.a.size(); i += 2)
//            A = A + (a.a[i] - 48);
//    return A;
//}
//
//int main() {
//    CHUSOCHAN a, b;
//    int type;
//    cin >> a >> b >> type;
//    cout << a << endl << b << endl;
//    cout << (a < b ? "true" : "false") << endl;
//    cout << tongThanhPhan(a, type) << endl;
//    cout << tongThanhPhan(b, type);
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

struct SoChanLe {
	string a;
};
istream& operator >> (istream& is, SoChanLe& a) {
	is >> a.a;
	return is;
}
ostream& operator <<(ostream& os, SoChanLe& a) {
	for (int i = 0; i < a.a.size(); i += 2) {
		os << a.a[i];
	}
	return os;
}
bool operator< (SoChanLe a, SoChanLe b) {
	int A = 0;
	int B = 0;
	for (int i = 0; i < a.a.size(); i += 2) {
		A = A * 10 + (a.a[i] - 48);
	}
	for (int i = 0; i < b.a.size(); i += 2) {
		B = B * 10 + (b.a[i] - 48);
	}
	return A < B;
}
int tongThanhPhan(SoChanLe a, int type = 0) {
	int tong = 0;
	if (type == 0) {
		for (int i = 0; i < a.a.size(); i+= 2) {
			tong += (a.a[i] - 48);
		}
	}
	else {
		for (int i = 1; i < a.a.size(); i+= 2) {
			tong += (a.a[i] - 48);
		}
	}
	return tong;
}
int main() {
	SoChanLe a, b;
	int type;
	cin >> a >>  b >> type;
	cout << a << "\n" << b << endl;
	if (a < b) {
		cout << "true" << endl;
	}else
	cout << "false" << endl;
	cout << tongThanhPhan(a, type) << endl;
	cout << tongThanhPhan(b, type) << endl;
	return 0;
}
