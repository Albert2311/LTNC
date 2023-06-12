/*Cho cấu trúc Phân số gồm tử và mẫu.
yêu cầu xây dựng các hàm quá tải sau:
Nhập
Xuất.
Cộng
So sánh bằng
So sánh khác
Viết một chương trình nhập vào 2 phân số, yêu cầu xuất như sau

xuất tổng 2 phân số (sau khi rút gọn)*/
/*
#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;
struct PhanSo {
    int tu;
    int mau;
};
int ucln(int tu, int mau) {
    while (mau > 0) {
        int x = tu % mau;
        tu = mau;
        mau = x;
    }
    return tu;
}
istream& operator >> (istream& is, PhanSo& a) {
    is >> a.tu >> a.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo a) {
    os << a.tu << "/" << a.mau;
    return os;
}
PhanSo rutGon(PhanSo ps) {
    int x = ucln(ps.tu,ps.mau) ;
    ps.tu /= x;
    ps.mau /= x;
    return ps;
}
PhanSo operator+ (PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + a.mau * b.tu;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}
bool operator == (PhanSo a, PhanSo b) {
    return (a.tu * b.mau == a.mau * b.mau);
}
bool operator != (PhanSo a, PhanSo b) {
    return !(a == b);
}
int main()
{
    PhanSo a, b;
    cin >> a >> b;
    cout << "Tong hai phan so: " << a << " + " << b << " = " << a + b << endl;
    return 0;
}
*/
#include<iostream>
#include<math.h>
using namespace std;
struct PhanSo {
    int tu, mau;
};
int ucln(int tu, int mau) {
    while (mau > 0) {
        int x = tu % mau;
        tu = mau;
        mau = x;
    }
    return tu;
}
PhanSo rutGon(PhanSo a) {
    int x = ucln(a.tu, a.mau);
    a.tu /= x;
    a.mau /= x;
    return a;
}
istream& operator >> (istream& is, PhanSo& a) {
    is >> a.tu >> a.mau;
    return is;
}

ostream& operator << (ostream& os, PhanSo a) {
    os << a.tu << "/" << a.mau;
    return os;
}
PhanSo operator+ (PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + a.mau * b.tu;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}
int main() {
    PhanSo a, b;
    cin >> a >> b;
    cout << rutGon(a) << " + " << rutGon(b) << endl;
    cout <<"Tong: " << a + b;
    return 0;
}

