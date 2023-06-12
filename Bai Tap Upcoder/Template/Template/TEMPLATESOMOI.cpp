#include <iostream>
using namespace std;
struct SoMoi {
	long gt;
};

long tongSoMoi(SoMoi sm);
istream& operator >> (istream& is, SoMoi& sm);
ostream& operator << (ostream& os, SoMoi sm);
bool operator > (SoMoi sm1, SoMoi sm2);
long operator + (SoMoi sm, long n);

template<typename T>
struct Mang {
	T q[1000];
	int n;
};
template <typename T>
istream& operator >> (istream& is, Mang<T>& m) {
	T x; m.n = 0;
	while (is >> x) {
		m.q[m.n++] = x;
	}
	return is;
}
template <typename T>
T timMax(Mang<T> m) {
	T max = m.q[0];
	for (int i = 1; i < m.n; i++) {
		if (m.q[i] > max) {
			max = m.q[i];
		}
	}
	return max;
}

int main() {
	char ch;
	cin >> ch;
	if (ch == 'N') {
		Mang<int> N;
		cin >> N;
		int max = timMax(N), dem = 0, tong = 0;
		cout << max << endl;
		for (int i = 0; i < N.n; i++) {
			if (N.q[i] == max) {
				dem++;
			}
			tong += N.q[i];
		}
		cout << dem << endl;
		cout << tong;
	}
	else if (ch == 'M') {
		Mang<SoMoi> M;
		cin >> M;
		SoMoi max = timMax(M);
		int dem = 0, tong = 0;
		cout << max << endl;
		for (int i = 0; i < M.n; i++) {
			if (tongSoMoi(M.q[i]) == tongSoMoi(max)) {
				dem++;
			}
			tong = M.q[i] + tong;
		}
		cout << dem << endl;
		cout << "[SoMoi] " << tong;
	}
	return 0;
}

long tongSoMoi(SoMoi sm) {
	long tong = 0; long x;
	while (sm.gt > 0) {
		x = sm.gt % 10;
		sm.gt /= 10;
		tong += x;
	}
	return tong;
}
istream& operator >> (istream& is, SoMoi& sm) {
	is >> sm.gt;
	return is;
}
ostream& operator << (ostream& os, SoMoi sm) {
	os << "[SoMoi] " << sm.gt;
	return os;
}
bool operator > (SoMoi sm1, SoMoi sm2) {
	return (tongSoMoi(sm1) > tongSoMoi(sm2));
}
long operator + (SoMoi sm, long n) {
	return (tongSoMoi(sm) + n);
}
