#include <iostream>
#include <math.h>
using namespace std;
int x;
struct BacNhat {
	int a, b;
	int& operator= (BacNhat x) {
		x.a = a;
		x.b = b;
	}
};
int tinhCong(BacNhat h1) {
	return (h1.a * x + h1.b);
}
istream& operator >> (istream& is, BacNhat& bn) {
	is >> bn.a >> bn.b;
	return is;
}
ostream& operator << (ostream& os, BacNhat bn) {
	os << bn.a << "x+" << bn.b;
	return os;
}
BacNhat operator+ (BacNhat h1, BacNhat h2) {
	BacNhat kq;
	kq.a = h1.a + h2.a;
	kq.b = h1.b + h2.b;
	return kq;
}
bool operator == (BacNhat h1, BacNhat h2) {
	if (h1.a + h1.b == h2.a + h2.b)
		return true;
	return false;
	
}
int main()
{
	BacNhat h1, h2;
	cin >> h1 >> h2 >> x;
	cout << h1 << "\n" << h2 << endl;
	cout << h1 << "+" << h2 << "=" << h1 + h2 << endl;
	cout << tinhCong(h1)<< endl;
	cout << tinhCong(h2) << endl;
	if (h1 == h2)
		cout << "TRUE";
	else
		cout << "FALSE";
	return 0;
}

