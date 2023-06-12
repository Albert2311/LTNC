#include <iostream>
#include <math.h>
using namespace std;

struct SoMoi {
    int A;
    void operator = (SoMoi sm) {
        A = sm.A;
    }
};
istream& operator >> (istream& is, SoMoi& sm) {
    is >> sm.A;
    return is;
}
ostream& operator << (ostream& os, SoMoi sm) {
    os << "[SoMoi] " << sm.A << endl;
    return os;
}
int tongChuSo(SoMoi sm) {
    int dem = 1;
    while (sm.A >= 10) {
        sm.A /= 10;
        dem++;
    }
    return dem;
}
int tinhTong(SoMoi sm1) {
    int tong = 0;
    while (sm1.A > 0) {
        tong += sm1.A % 10;
        sm1.A /= 10;
    }
    return tong;
}
bool operator> (SoMoi a, SoMoi b) {
    return tinhTong(a) > tinhTong(b); 
}
SoMoi operator+ (SoMoi sm1, SoMoi sm2) {
    SoMoi sm3;
    sm3.A = tinhTong(sm1) + tinhTong(sm2);
    return sm3;
}
int main()
{
    SoMoi a, b;
    cin >> a >> b;
    cout << a << b;
    if (a > b) {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
    cout << a + b;
    return 0;
}
