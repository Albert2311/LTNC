//#include <bits/stdc++.h>
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
//bool operator> (PhanSo A, PhanSo B) {
//    return A.Tu * B.Mau > A.Mau * B.Tu;
//}
//template <typename Temp>
//struct Mang {
//    int n;
//    Temp a[100];
//    void operator= (Mang A) {
//        n = A.n;
//        for (int i = 0; i < n; i++) {
//            a[i] = A[i];
//        }
//    }
//    Temp& operator[] (int i) {
//        return a[i];
//    }
//    Mang() {
//        n = 0;
//    }
//
//};
//template <typename Temp>
//istream& operator>> (istream& is, Mang<Temp>& m) {
//    m.n = 0;
//    for (int i = 0; i < m.n; i++) {
//        is >> m[i];
//    }
//    return is;
//}
//template <typename Temp>
//ostream& operator<< (ostream& os, Mang<Temp> m) {
//    for (int i = 0; i < m.n; i++) {
//        os << m[i];
//    }
//    return os;
//}
//template <typename Temp>
//Temp min(Mang<Temp> m) {
//    Temp Min = m[0];
//    for (int i = 0; i < m.n; i++) {
//        if (Min > m[i]) {
//            Min = m[i];
//        }
//    }
//    return Min;
//}
//template <typename Temp>
//void xuat(Mang<Temp> m) {
//    if (m.n == 0)
//        cout << "khong co\n";
//    else
//        cout << min<Temp>(m) << endl;
//}
//int main() {
//    Mang<int> m1;
//    Mang<float> m2;
//    Mang<PhanSo> m3;
//    char Type;
//    while (cin >> Type) {
//        if (Type == 'a')
//            cin >> m1[m1.n++];
//        else {
//            if (Type == 'b')
//                cin >> m2[m2.n++];
//            else
//                cin >> m3[m3.n++];
//        }
//    }
//    xuat<int>(m1);
//    xuat<float>(m2);
//    xuat<PhanSo>(m3);
//    return 0;
//}
//


#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct Mang {
	char type;
	T a[1000];
	int n;
	T& operator[](int i) {
		return a[i];
	}
	void operator=(Mang<T> b) {
		n = a.n;
		for (int i = 0; i < a.n; i++) {
			a[i] = b[i];
		}
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
	PS() {
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
	rutGon(a);
	return os;
}
bool operator==(PS a, PS b) {
	return a.tu * b.mau == b.tu * a.mau;
}
bool operator>(PS a, PS b) {
	return (a.tu * b.mau) > (b.tu / a.mau);
}
template<typename T>
T Min(Mang<T> a) {
	T min = a[0];
	for (int i = 0; i < a.n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}
template<typename T>
void xuat(Mang<T> a) {
	if (a.n == 0) {
		cout << "khong co" << endl;
	}
	else {
		cout << Min(Mang<T> (a)) << endl;
	}
}
int main() {
	Mang<int> a;
	Mang<float> b;
	Mang<PS> c;
	char type;
	while (cin >> type) {
		if (type == 'a') {
			int x;
			cin >> x;
			a[a.n++] = x;
		}
		else if(type == 'b') {
			float y;
			cin >> y;
			b[b.n++] = y;
		}
		else {
			PS ps;
			cin >> ps;
			c[c.n++] = ps;
		}
	}
	xuat(Mang<int>(a));
	xuat(Mang<float>(b));
	xuat(Mang<PS>(c));

	return 0;
}