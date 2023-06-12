/*Cho cấu trúc mảng 1 chiều.
yêu cầu xây dựng các hàm quá tải sau :
Nhập
Xuất.
Gán
Cộng
So sánh bằng
So sánh khác
Toán tử[]
Viết một chương trình nhập vào 2 mảng 1 chiều, xuất "yes" nếu 2 mảng giống nhau, ngược lại xuất "no" nếu 2 mảng khác nhau.
Hướng dẫn nhập :
Dòng 1 : nhập số lượng phần tử mảng thứ 1 (<= 10)
Dòng 2 : Nhập các phần tử của mảng thứ 1 (mỗi phần tử có giá trị <= 100)
Dòng 3 : nhập số lượng phần tử mảng thứ 2 (<= 10)
Dòng 4 : Nhập các phần tử của mảng thứ 2 (mỗi phần tử có giá trị <= 100)
ví dụ :
input:
3
1 2 3
4
1 2 5 7
output:
no*/
#include <iostream>
#include <math.h>
using namespace std;

struct Mang {
	int sl;
	int a[100];
	int& operator = (Mang m) {
		m.sl = sl;
		for (int i = 0; i < sl; i++) {
			m.a[i] = a[i];
		}
	}
	int operator[] (int i) {
		return a[i];
	}
};

istream& operator >> (istream& is, Mang& m) {
	is >> m.sl;
	for (int i = 0; i < m.sl; i++) {
		is >> m.a[i];
	}
	return is;
}
ostream& operator << (ostream& os, Mang m) {
	os << m.sl << endl;
	for (int i = 0; i < m.sl; i++) {
		os << m.a[i] << " ";
	}
	return os;
}
Mang operator+ (Mang m1, Mang m2) {
	Mang kq;
	if (m1.sl <= m2.sl) {
		kq.sl = m2.sl;
		for (int i = 0; i < m1.sl; i++) {
			kq.a[i] = m1.a[i] + m2.a[i];
		}
		cout << kq;
	}
	else {
		kq.sl = m1.sl;
	}
	return kq;
}

bool operator==(Mang m1, Mang m2) {
	if (m1.sl != m2.sl)
		return false;
	else {
		for (int i = 0; i < m1.sl; i++) {
			if (m1.a[i] == m2.a[i])
				return true;
		}
		return false;
	}
}
bool operator !=(Mang m1, Mang m2) {
	return !(m1 == m2);
}
int main() {
	Mang m1,m2;
	cin >> m1 >> m2;
	cout << "\n" << m1 << "\n" << m2 << endl;
	if (m1 == m2) {
		cout << "yes";
	}
	else
	cout << "no" << endl;
	return 0;
}