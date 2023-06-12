#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};
struct HonSo {
    int hs;
    PhanSo ps;
    void operator= (HonSo a) {
        hs = a.hs;
        ps = a.ps;
    }
};
istream& operator >> (istream& is, PhanSo& a) {
    is >> a.tu >> a.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo a) {
    os << a.tu << "/" << a.mau;
    return os;
}
bool operator!= (PhanSo a, PhanSo b) {
    if (a.tu == b.tu && a.mau == b.mau)
    return false;
        return true;
}
//HON SO
istream& operator >> (istream& is, HonSo& a) {
    is >> a.hs >> a.ps;
    return is;
}
ostream& operator << (ostream& os, HonSo a) {
    os << a.hs << " " << a.ps;
    return os;
}
int ucln(int tu, int mau) {
    while (mau > 0) {
        int x = tu % mau;
        tu = mau;
        mau = x;
    }
    return tu;
}
PhanSo rutGonPS(PhanSo a) {
        int x = ucln(a.tu, a.mau);
        a.tu /= x;
        a.mau /= x;
        return a;
}
PhanSo operator+ (PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + a.mau * b.tu;
    kq.mau = a.mau * a.mau;
    return rutGonPS(kq);
}
PhanSo operator- (PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau - a.mau * b.tu;
    kq.mau = a.mau * a.mau;
    return rutGonPS(kq);
}

HonSo operator-(HonSo a) { return a; }
HonSo operator+ (HonSo a) {
    return a;
}
PhanSo chuyenPS(HonSo a) {
    PhanSo kq;
    kq.tu = a.hs * a.ps.mau + a.ps.tu;
    kq.mau = a.ps.mau;
    return rutGonPS(kq);
}
HonSo rutGonHS(HonSo a) {
    chuyenPS(a);
    int x = a.ps.tu / a.ps.mau;
    a.hs += x;
    int y = a.ps.tu % a.ps.mau;
    a.ps.tu = y;
    a.ps = rutGonPS(a.ps);
    return a;
}
bool operator!= (HonSo a, HonSo b) {
    return !(a.hs == b.hs && a.ps.tu == b.ps.tu && a.ps.mau == b.ps.mau);
}
int tongCacThanhPhan(HonSo a) {
    int tong;
    tong = a.hs + a.ps.tu + a.ps.mau;
    return tong;
}
bool operator > (HonSo a, HonSo b) {
    return tongCacThanhPhan(a) > tongCacThanhPhan(b);
}
int main()
{
    HonSo a, b;
    string c;
    cin >> a >> b >> c;
    if (a != b) {
        cout << "TRUE" << endl;
    }
    else
        cout << "FALSE" << endl;
    //
    if (a > b) {
        cout << "TRUE"<< endl;
    }
    else
        cout << "FALSE" << endl;
    //
    if (c == "true") {
        cout << rutGonHS(a) << "\n" << rutGonHS(b);
    }
    else if (c == "false")
        cout << chuyenPS(a) << "\n" << chuyenPS(b);
    return 0;
}
