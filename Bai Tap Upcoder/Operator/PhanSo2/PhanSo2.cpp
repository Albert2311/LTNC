/*+Xây dựng cấu trúc PhanSo:
Viết quá tải toán tử: >>, <<, ==,!=,+

+ xây dựng cấu trúc mảng Phân số
viết quá tải toán tử: >>,<<,[].

viết ct nhập vào dãy phân số, yêu cầu xuất tổng phân số sau khi rút gọn
ví dụ:
1 2
2 3
3 4
;
output:
23/12*/
/*
#include <iostream>
#include <cmath>
using namespace std;
struct PhanSo {
    int tu, mau;
    void operator= (PhanSo a) {
        tu = a.tu ;
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
PhanSo rutGon(PhanSo a){
    int x = ucln(a.tu, a.mau);
    PhanSo rg;
    rg.tu = a.tu /= x;
    rg.mau = a.mau /= x;
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
int main()
{
    PhanSo a, tong;
    while (cin >> a)
        tong = tong + a;
    cout << tong;

    return 0;
}
*/

#include <iostream>
#include <cmath>
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
struct Mang {
    PhanSo a[1000];
    int n;

    PhanSo& operator[] (int i) {
        return a[i];
    }
};
PhanSo rutGon(PhanSo a) {
    int x = ucln(a.tu, a.mau);
    PhanSo rg;
    rg.tu = a.tu /= x;
    rg.mau = a.mau /= x;
    return rg;
}
istream& operator >> (istream& is, PhanSo& a) {
    is >> a.tu >> a.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo a) {
    os << a.tu << "/" << a.mau;
    return os;
}
istream& operator>> (istream& is, Mang& m) {
    m.n = 0;
    while (is >> m.a[m.n++]) {}
    m.n--;
    return is;
}
ostream& operator<< (ostream& os, Mang m) {
    for (int i = 0; i < m.n; i++) {
        os << m[i] << endl;
    }
    return os;
}
bool operator== (PhanSo a, PhanSo b) {
    return a.tu * b.mau == a.mau * b.tu;
}
bool operator!= (PhanSo a, PhanSo b) {
    return !(a == b);
}
PhanSo operator+ (PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + a.mau * b.tu;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}
int main()
{
    Mang m;
    cin >> m;
    PhanSo tong;
    for (int i = 0; i < m.n; i++) {
        tong = tong + m[i];
    }
    cout << tong;
    return 0;
}