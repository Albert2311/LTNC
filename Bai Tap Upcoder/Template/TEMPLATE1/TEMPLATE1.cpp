//#include <bits/stdc++.h>
//using namespace std;
//
//class Oxy {
//protected:
//    int x, y;
//public:
//    Oxy(int a = 0, int b = 0) {
//        x = a;
//        y = b;
//    }
//    Oxy(const Oxy& a) {
//        x = a.x;
//        y = a.y;
//    }
//    ~Oxy() {}
//
//    double operator- (Oxy a) {
//        return sqrt(pow(a.x - x, 2) + pow(a.y - y, 2));
//    }
//    bool operator< (Oxy a) {
//        return x < a.x || (x == a.x && y < a.y);
//    }
//    friend istream& operator>> (istream& is, Oxy& a) {
//        is >> a.x >> a.y;
//        return is;
//    }
//    friend ostream& operator<< (ostream& os, Oxy a) {
//        os << "(" << a.x << "," << a.y << ")";
//        return os;
//    }
//};
//
//class Oxyz {
//protected:
//    int x, y, z;
//public:
//    Oxyz(int a = 0, int b = 0, int c = 0) {
//        x = a;
//        y = b;
//        z = c;
//    }
//    Oxyz(const Oxyz& a) {
//        x = a.x;
//        y = a.y;
//        z = a.z;
//    }
//    ~Oxyz() {}
//
//    double operator- (Oxyz a) {
//        return sqrt(pow(a.x - x, 2) + pow(a.y - y, 2) + pow(a.z - z, 2));
//    }
//    bool operator< (Oxyz a) {
//        return x < a.x || (x == a.x && y < a.y) || (x == a.x && y == a.y && z < a.z);
//    }
//    friend istream& operator>> (istream& is, Oxyz& a) {
//        is >> a.x >> a.y >> a.z;
//        return is;
//    }
//    friend ostream& operator<< (ostream& os, Oxyz a) {
//        os << "(" << a.x << "," << a.y << "," << a.z << ")";
//        return os;
//    }
//};
//
//template <typename Temp>
//bool up(Temp a, Temp b) {
//    return a < b;
//}
//template <typename Temp>
//bool down(Temp a, Temp b) {
//    return b < a;
//}
//
//template <typename Temp>
//class Array {
//protected:
//    int n;
//    Temp a[1001];
//public:
//    int getn() { return n; }
//    void setn(int x) { n = x; }
//
//    Array() {
//        n = 0;
//    }
//
//    Temp& operator[] (int i) {
//        return a[i];
//    }
//    void Up() {
//        sort(a, a + n, up<Temp>);
//    }
//    void Down() {
//        sort(a, a + n, down<Temp>);
//    }
//    friend istream& operator>> (istream& is, Array<Temp>& ar) {
//        is >> ar.n;
//        for (int i = 0; i < ar.n; i++) {
//            is >> ar[i];
//        }
//        return is;
//    }
//    friend ostream& operator<< (ostream& os, Array<Temp> ar) {
//        for (int i = 0; i < ar.n; i++) {
//            os << ar[i] << " ";
//        }
//        return os;
//    }
//
//    double maxOfTwo() {
//        double temp = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                if (temp < a[i] - a[j])
//                    temp = a[i] - a[j];
//            }
//        }
//        return roundf(temp * 1000) / 1000;
//    }
//};
//
//int main() {
//    string x;
//    Array<Oxy> a;
//    Array<Oxyz> b;
//
//    while (cin >> x) {
//        if (x == "Oxy") {
//            cin >> a[a.getn()];
//            a.setn(a.getn() + 1);
//        }
//        else {
//            cin >> b[b.getn()];
//            b.setn(b.getn() + 1);
//        }
//    }
//    a.Up();
//    b.Down();
//    cout << a << endl << b << endl;
//    cout << a.maxOfTwo() << endl;
//    cout << b.maxOfTwo();
//    return 0;
//}
//
//

#include<iostream>
using namespace std;
//----------------------------------------------------------------
struct Oxy {
	int x, y;
	void operator=(Oxy A) {
		x = A.x;
		y = A.y;
	}
	Oxy() {
		x = y = 0;
	}
};
istream& operator>>(istream& is, Oxy& A) {
	is >> A.x >> A.y;
	return is;
}
ostream& operator<<(ostream& os, Oxy A) {
	os << "(" << A.x << "," << A.y << ")" << " ";
	return os;
}
double operator-(Oxy A, Oxy B) {
	return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y),2));
}
bool operator<(Oxy A, Oxy B) {
	if (A.x < B.x) {
		return true;
	}
	else if(A.x == B.x){
		if (A.y < B.y) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

//-----------------------------------------------------------------------
struct Oxyz {
	int x, y, z;
	void operator=(Oxyz A) {
		x = A.x;
		y = A.y;
		z = A.z;
	}
	Oxyz() {
		x = y = z = 0;
	}
};
istream& operator>>(istream& is, Oxyz& A) {
	is >> A.x >> A.y >> A.z;
	return is;
}
ostream& operator<<(ostream& os, Oxyz A) {
	os << "(" << A.x << "," << A.y << ","<< A.z << ")" << " ";
	return os;
}
double operator-(Oxyz A, Oxyz B) {
	return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2) + pow((B.z - A.z), 2));
}
bool operator<(Oxyz A, Oxyz B) {
	return ((A.x < B.x) || (A.x == B.x && A.y < B.y) || (A.x == B.x && A.y == B.y && A.z < B.z));
}
//------------------------------------------------------------
template<typename T>
struct Mang {
	T a[1000];
	int n;
	string type;
	T& operator[](int i) {
		return a[i];
	}
	void operator=(Mang<T> A) {
		n = a.n;
		for (int i = 0; i < a.n; i++) {
			a[i] = A[i];
		}
	}
	Mang() {
		n = 0;
	}
};
template<typename T>
istream& operator>>(istream& is, Mang<T>& a) {
	a.n = 0;
	while(is >> a[a.n++]){}
	a.n--;
	for (int i = 0; i < a.n; i++) {
		is >> a[i];
	}
	return is;
}
template<typename T>
ostream& operator<<(ostream& os, Mang<T> a) {
	for (int i = 0; i < a.n; i++) {
		os << a[i];
	}
	return os;
}
template<typename T>
void tangDan(Mang<T> a) {
	for (int i = 0; i < a.n; i++) {
		for (int j = i + 1; j < a.n; j++) {
			if (a[j] < a[i]) {
			T temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
		}
	}
	for (int i = 0; i < a.n; i++) {
		cout << a[i] << " ";
	}
	//return a;
}
template<typename T>
void giamDan(Mang<T> a) {
	for (int i = 0; i < a.n; i++) {
		for (int j = i + 1; j < a.n; j++) {
			if (a[i] < a[j]) {
				T temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < a.n; i++) {
		cout << a[i] << " ";
	}
	//return a;
}
template<typename T>
double KCLN(Mang<T> a) {
	double temp = 0;
	for (int i = 0; i < a.n; i++) {
		for (int j = i + 1; j < a.n; j++) {
			if (temp < a[i] - a[j]) {
				temp = a[i] - a[j];
			}
		}
	}
	return roundf(temp * 1000) / 1000;
}
int main() {
	Mang<Oxy> a;
	Mang<Oxyz> b;
	string type;
	while (cin >> type) {
		if (type == "Oxy") {
			Oxy x;
			cin >> x;
			a[a.n++] = x;
		}
		else {
			Oxyz y;
			cin >> y;
			b[b.n++] = y;
		}
	}
	tangDan(Mang<Oxy>(a)) ;
	cout << endl;
	giamDan(Mang<Oxyz>(b));
	cout << endl;
	cout << KCLN(Mang<Oxy>(a)) << endl;
	cout << KCLN(Mang<Oxyz>(b)) << endl;
	return 0;
}
