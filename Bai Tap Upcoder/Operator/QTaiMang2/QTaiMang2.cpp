#include <iostream>
using namespace std;

struct M1C {
	int t;
	int a[50];
	int& operator [] (int i) {
		return a[i];
	}
	void operator = (M1C m) {
		t = m.t;
		for (int i = 0; i < t; i++)
			a[i] = m[i];
	}
};

istream& operator >> (istream& is, M1C& m);
ostream& operator << (ostream& os, M1C m);

M1C operator +(M1C m1, M1C m2);
int main() {
	M1C m1, m2;
	cin >> m1 >> m2;
	M1C m3;
	m3 = m1 + m2;
	cout << m3;
	return 0;
}

istream& operator >> (istream& is, M1C& m) {
	is >> m.t;
	for (int i = 0; i < m.t; i++) {
		is >> m[i];
	}
	return is;
}
ostream& operator << (ostream& os, M1C m) {
	for (int i = 0; i < m.t; i++) {
		os << m[i] << " ";
	}
	return os;
}

M1C operator + (M1C m1, M1C m2) {
	M1C m3;
	if (m1.t < m2.t) {
		m3 = m2;
		for (int i = 0; i < m1.t; i++) {
			m3[i] = m3[i] + m1[i];
		}
	}
	else {
		m3 = m1;
		for (int i = 0; i < m2.t; i++) {
			m3[i] = m3[i] + m2[i];
		}
	}
	return m3;
}