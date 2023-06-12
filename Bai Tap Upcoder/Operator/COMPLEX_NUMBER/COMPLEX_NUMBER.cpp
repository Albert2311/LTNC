#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct SoPhuc {
    int real;
    int image;
    void operator = (SoPhuc a) {
        real = a.real;
        image = a.image;
    }

    SoPhuc() {
        real = image = 0;
    }
};
struct Mang {
    SoPhuc a[1000];
    int n;
    SoPhuc& operator[](int i) {
        return a[i];
    }
};
// So phuc
istream& operator>>(istream& is, SoPhuc& sp) {
    is >> sp.real >> sp.image;
    return is;
}
ostream& operator<<(ostream& os, SoPhuc sp) {
    os << "{" << sp.real << (sp.image > 0 ? "+" : "") << sp.image << "i}" << " ";
    return os;
}
//nhap xuat mang
istream& operator>>(istream& is, Mang& m) {
    m.n = 0;
    while (is >> m.a[m.n++]) {}
    m.n--;
    return is;
}
ostream& operator<<(ostream& os, Mang m) {
    for (int i = 0; i < m.n; i++) {
        os << m.a[i];
    }
    return os;
}
float Module(SoPhuc a) {
    float kq;
    kq = float(sqrt(pow(a.real, 2) + pow(a.image, 2)));
    return kq;
}
SoPhuc operator+(SoPhuc a, SoPhuc b) {
    SoPhuc kq;
    kq.real = a.real + b.real;
    kq.image = a.image + b.image;
    return kq;
}
int main()
{
    Mang a;
    cin >> a;
    cout << a << endl;
    for (int i = 0; i < a.n; i++) {
        cout << fixed << setprecision(2) << Module(a[i]) << " ";
    }
    cout << endl;
    SoPhuc tong;
    for (int i = 0; i < a.n; i++) {
        tong = tong + a[i];
    }
    cout << tong;
    return 0;
}

