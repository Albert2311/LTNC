#include <iostream>
using namespace std;
struct HCN {
	int a, b;
};
istream& operator >> (istream& is, HCN& hcn);
ostream& operator << (ostream& os, HCN hcn);
float ChuVi(HCN hcn);
bool operator < (HCN hcn1, HCN hcn2);
float operator + (HCN hcn, float x);
ostream& operator << (ostream& os, HCN hcn) {
	os << "[HCN]" << hcn.a << "," << hcn.b;
	return os;
}
istream& operator >> (istream& is, HCN& hcn) {
	is >> hcn.a >> hcn.b;
	return is;
}
float ChuVi(HCN hcn) {
	return (hcn.a + hcn.b) * 2;
}
bool operator < (HCN hcn1, HCN hcn2) {
	return ChuVi(hcn1) < ChuVi(hcn2);

}
float operator + (HCN hcn, float x) {
	return ChuVi(hcn) + x;
}
int main() {
	HCN h1, h2;
	cin >> h1;
	cin >> h2;
	cout << h1 << endl;
	cout << h2 << endl;
	if (h1 < h2) {
		cout << "true";
	}
	else cout << "false";
	return 0;
}