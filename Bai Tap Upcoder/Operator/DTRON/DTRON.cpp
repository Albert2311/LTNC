#include <bits/stdc++.h>
using namespace std;

struct Diem {
    int td, hd;
};
struct DTRON {
    Diem o;
    double r;
};
// diem 
istream& operator>>(istream& is, Diem& d) {
    is >> d.td >> d.hd;
    return is;
}
ostream& operator << (ostream& os, Diem d) {
    os << "(" << d.td << "," << d.hd << ")";
    return os;
}
// duong tron
istream& operator>>(istream& is, DTRON& dt) {
    is >> dt.o >> dt.r;
    return is;
}
ostream& operator << (ostream& os, DTRON dt) {
    os << dt.o << " " << dt.r << endl;
    return os;
}
double tinhCV(DTRON dt) {
    return (2 * 3.14 * dt.r);
}
bool operator==(DTRON dt1, DTRON dt2) {
    return tinhCV(dt1) == tinhCV(dt2);
}
bool operator<(DTRON dt1, DTRON dt2) {
    return tinhCV(dt1) < tinhCV(dt2);
}
double tinhDT(DTRON dt) {
    return 3.14 * dt.r * dt.r;
}
double operator+(DTRON dt1, DTRON dt2) {
    return tinhDT(dt1) + tinhDT(dt2);
}
//quá tải toán tử trừ ( - ) để tính khoảng cách giữa 2 điểm
Diem operator-(Diem a, Diem b) {
    Diem d;
    d.td = a.td - b.td;
    d.hd = a.hd - b.hd;
    return d;
}
double tinhKC(Diem a, Diem b) {
    double d;
    d = sqrt(pow((b.td - a.td), 2) + pow((b.hd - a.hd), 2));
    return d;
}
//Viết quá tải so sánh bằng ( == ) để kiểm tra 2 điểm trùng nhau  
bool operator==(Diem a, Diem b) {
    return (a.td == b.td && a.hd == b.hd);
}

void VTTD(DTRON dt1, DTRON dt2) {
    double d2;
    d2 = tinhKC(dt1.o, dt2.o);

    if (d2 > abs(dt1.r - dt2.r) && d2 < dt1.r + dt2.r) {
        cout << "C" << endl; // cat nhau
    }
    if (d2 == abs(dt1.r - dt2.r)) {
        cout << "TXT" << endl; // tiep xuc trong
    }
    if (d2 == (dt1.r + dt2.r)) {
        cout << "TXN" << endl;
    }
    if (d2 > (dt1.r + dt2.r)) {
        cout << "NN" << endl;
    }
    if (d2 < abs(dt1.r - dt2.r) && d2 != 0) {
        cout << "DN" << endl;
    }
    if (d2 == 0) {
        cout << "DT" << endl; // dong tam
    }
}
int main()
{
    DTRON dt1, dt2;
    cin >> dt1 >> dt2;
    cout << dt1 << dt2;
    double dt3 = tinhDT(dt1) + tinhDT(dt2);
    cout << roundf(dt3 * 1000) / 1000 << endl;
    if (tinhCV(dt1) == tinhCV(dt2)) {
        cout << "1 = 2" << endl;
    }
    if (tinhCV(dt1) < tinhCV(dt2)) {
        cout << "1 < 2" << endl;
    }
    if (tinhCV(dt2) < tinhCV(dt1)) {
        cout << "1 > 2" << endl;
    }
    VTTD(dt1, dt2);
    return 0;
}