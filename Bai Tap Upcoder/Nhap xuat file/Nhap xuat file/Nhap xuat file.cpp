//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main() {
//	ifstream in("input.txt");
//	int a, b;
//	cin >> a >> b;
//	ofstream out("out.txt");
//	out << a + b;
//	return 0;
//}

// mã bài: vector
//#include<iostream>
//#include<fstream>
//#include<iomanip>
//#include<math.h>
//using namespace std;
//
//
//bool SNT(int a) {
//	if (a < 2) {
//		return false;
//	}
//	int count = 0;
//	for (int i = 2; i <= (int)sqrt(a); i++) {
//		if (a % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int tongchuso(int a) {
//	int tong = 0;
//	while (a > 0) { //9817
//		if (!SNT(a % 10)) {
//			tong = tong + a % 10;
//
//		}
//			a /= 10;
//	}
//	return tong;
//}
//int main() {
//	int a[100];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		if (SNT(a[i])) {
//			cout << tongchuso(a[i]) << endl;
//		}
//		else {
//			cout << -1 << endl;
//		}
//	}
//	//int n = 9817;
//	//cout << tongchuso(n);
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<math.h>
//using namespace std;
//
//bool SNT(long a) {
//	if (a < 2) {
//		return false;
//	}
//	for (int i = 2; i <= (int)sqrt(a); i++) {
//		if (a % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//long tongchuso(long a) {
//	long tong = 0;
//	while (a > 0) {
//		if (!SNT(a % 10)) {
//			tong += a % 10;
//		}
//		a /= 10;
//	}
//	return tong;
//}
//int main() {
//	int n;
//	vector<long> a;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int x;cin >> x;
//		a.push_back(x);
//	}
//	for (vector<long>::iterator it = a.begin(); it != a.end(); ++it) {
//		if (SNT(*it)) {
//			cout << tongchuso(*it) << endl;
//
//		}
//		else
//			cout << -1 <<endl;
//	}
//	return 0;
//}

// FSTREAM1
//#include<iostream>
//#include<fstream>
//#include<math.h>
//bool SCP(int a) {
//	if ((float)sqrt(a) == (int)sqrt(a)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//using namespace std;
//int main() {
//	ifstream in("FSTREAM.inp");
//	ofstream out("FSTREAM.out");
//	int n;
//	in >> n;
//	if (SCP(n)) {
//		out << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//	in.close();
//	out.close();
//	return 0;
//}

// ONTAP
#include<iostream>
#include<math.h>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
    int tu, mau;
    void operator= (PhanSo a) {
        tu = a.tu;
        mau = a.mau;
    }
    PhanSo() {
        tu = 0;
        mau = 1;
    }
};

int ucln(int tu, int mau) {
    while (mau > 0) {
        int x = tu % mau;
        tu = mau;
        mau = x;
    }
    return tu;
}
PhanSo rutGon(PhanSo& a) {
    int x = ucln(a.tu, a.mau);
    a.tu = a.tu / x;
    a.mau = a.mau / x;
    return a;
}
istream& operator >> (istream& is, PhanSo& a) {
    char x;
    is >> a.tu >> x >> a.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo a) {
    rutGon(a);
    if (a.tu == 0) {
        os << 0;
        return os;
    }
    if (a.mau == 1) {
        os << a.tu;
        return os;
    }
    rutGon(a);
    os << a.tu << "/" << a.mau;

    return os;
}
PhanSo operator+(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}
bool operator==(PhanSo a, PhanSo b) {
    return a.tu * b.mau == b.tu * a.mau;
}
bool operator<(PhanSo a, PhanSo b) {
    return a.tu * b.mau < b.tu * a.mau;
}
bool operator>(PhanSo a, PhanSo b) {
    return a.tu * b.mau < b.tu * a.mau;
}
// 
template <typename T>
struct Mang {
    int n;
    T a[100];
    T& operator[](int i) {
        return a[i];
    }
    void operator=(Mang b) {
        n = b.n;
        for (int i = 0; i < b.n; i++) {
            a[i] = b.a[i];
        }
    }
    Mang() {
        n = 0;
    }
};
template <typename T>
istream& operator>>(istream& is, Mang<T>& a) {
    is >> a.n;
    for (int i = 0; i < a.n; i++) {
        is >> a[i];
    }
    return is;
}
template <typename T>
ostream& operator<<(ostream& os, Mang<T> a) {
    for (int i = 0; i < a.n; i++) {
        os << a[i] << " ";
    }
    return os;
}
template <typename T>
T tongPhanTu(Mang<T> a) {
    T tong = a.a[0];
    for (int i = 1; i < a.n; i++) {
        tong = tong + a.a[i];
    }
    return tong;
}
template <typename T>
T phanTuMax(Mang<T> a) {
    T max = a[0];
    for (int i = 1; i < a.n; i++) {
        if (max < a.a[i]) {
            max = a.a[i];
        }
    }
    return max;
}
template <typename T>
T SUM(Mang<T> a) {
    T tong = a[0];
    for (int i = 1; i < a.n; i++) {
        tong = tong + a[i];
    }
    return tong;
}
template <typename T>
Mang<T> sapXep(Mang<T> a, char x = '<') {
    if (x == '<') {
        for (int i = 0; i < a.n; i++) {
            for (int j = i + 1; j < a.n; j++) {
                //chan
                if (a[i] > a[j]) {
                    T tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        return a;
    }
    else {
        for (int i = 0; i < a.n; i++) {
            for (int j = i + 1; j < a.n; j++) {
                //chan
                if (a[i] < a[j]) {
                    T tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        return a;
    }
}
template <typename T>
Mang<T> operator+(Mang<T> a, Mang<T> b) {
    Mang<T> c;
    if (a.n < b.n) {
        c = b;
        for (int i = 0; i < a.n; i++) {
            c[i] = c[i] + a[i];
        }
    }
    else {
        c = a;
        for (int i = 0; i < b.n; i++) {
            c[i] = c[i] + b[i];
        }
    }
    return c;
}
int main() {
    char type;
    // mang 1
    cin >> type;
    if (type == 'I') {
       Mang<int> a1;
       Mang<int> a2;
       cin >> a1 >> a2;
       cout << a1;
       cout << "\nMAX 1 = " << phanTuMax(a1) << endl;
       cout << "SUM 1 = " << SUM(a1) << endl;
       Mang<int> m1 = sapXep(a1, '<');
       for (int i = 0; i < m1.n; i++) {
           if (m1[i] % 2 == 0) {
               cout << m1.a[i] << " ";
           }
       }
       for (int j = 0; j < m1.n; j++) {
           if (m1[j] % 2 != 0) {
               cout << m1.a[j] << " ";
           }
       }
       cout << endl;
      //xuat 2
     cout << a2;
     cout << "\nMAX 2 = " << phanTuMax(a2) << endl;
     cout << "SUM 2 = " << SUM(a2) << endl;
     Mang<int> m2 = sapXep(a2, '>');
     for (int j = 0; j < m2.n; j++) {
         if (m2[j] % 2 != 0) {
             cout << m2.a[j] << " ";
         }
     }
     for (int i = 0; i < m2.n; i++) {
         if (m2[i] % 2 == 0) {
             cout << m2.a[i] << " ";
         }
     }
     cout << endl;
     cout << a1 + a2;
    }
    else {
        Mang<PhanSo> ps1;
        Mang<PhanSo> ps2;
        cin >> ps1 >> ps2;
        cout << ps1;
        cout << "\nMAX 1 = " << phanTuMax(ps1) << endl;
        cout << "SUM 1 = " << SUM(ps1) << endl;
        Mang<PhanSo> ps3 = sapXep(ps1, '>');
        for (int i = 0; i < ps3.n; i++) {
                cout << ps3.a[i] << " ";
        }
        cout << endl;
        //xuat 2
        cout << ps2;
        cout << "\nMAX 2 = " << phanTuMax(ps2) << endl;
        cout << "SUM 2 = " << SUM(ps2) << endl;
        Mang<PhanSo> ps4 = sapXep(ps2, '<');
        for (int j = 0; j < ps4.n; j++) {
                cout << ps4.a[j] << " ";
        }
        cout << endl;
        cout << ps1 + ps2;
    }
	return 0;
}

