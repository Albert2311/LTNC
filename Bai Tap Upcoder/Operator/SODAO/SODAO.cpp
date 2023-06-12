#include <iostream>
using namespace std;
struct SoDao {
    int a;
    void operator=(SoDao sd) {
        a = sd.a;
    }
};
istream& operator>>(istream& is, SoDao& sd) {
    is >> sd.a;
    return is;
}
ostream& operator << (ostream& os, SoDao sd) {
    os << "[SoDao]" << sd.a << endl;
    return os;
}
int DaoSo(SoDao sd) {
    int tmp;
    int dao = 0 ;
    while (sd.a > 0) {
    tmp = sd.a % 10;
    dao = (dao * 10) + tmp;
    sd.a = sd.a / 10;
    } 
    return dao;
}
bool operator>(SoDao sd1, SoDao sd2) {
    return (DaoSo(sd1) > DaoSo(sd2));
}
SoDao operator+(SoDao sd1, SoDao sd2) {
    SoDao kq;
    kq = sd1 + sd2;
    return kq;
}
int tong(SoDao sd1, SoDao sd2) {
    return DaoSo(sd1) + DaoSo(sd2);
}
int main()
{
    SoDao a, b;
    cin >> a >> b;
    cout << a << b;
    if (a > b) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    cout << DaoSo(a) + DaoSo(b);
    return 0;
}

