#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int x =0;
struct bacHai {
    int a, b, c;
};
struct bacNhat {
    int a, b;
};
istream& operator>>(istream& is, bacHai& bh) {
    is >> bh.a >> bh.b >> bh.c;
    return is;
}
ostream& operator << (ostream & os, bacHai bh) {

    os << bh.a << "x^2";
    if (bh.b >= 0) cout << "+"; else "";
    os << bh.b << "x";
    if (bh.c >= 0) cout << "+"; else ""; 
    os << bh.c << endl;
    return os;
} 
// bac nhat
istream& operator>>(istream& is, bacNhat& bn) {
    is >> bn.a >> bn.b;
    return is;
}
ostream& operator << (ostream& os, bacNhat bn) {
    os << bn.a << "x";
    if (bn.b >= 0) cout << "+"; else "";
    os << bn.b;
    return os;
}
int tinhGiaTri_BacHai(bacHai bh) {
    return (bh.a * x * x + bh.b * x + bh.c);
}
bacHai operator+(bacHai h1, bacHai h2) {
    bacHai kq;
    kq.a = h1.a + h2.a;
    kq.b = h1.b + h2.b;
    kq.c = h1.c + h2.c;
    return kq;
}
bacHai operator*(bacNhat h1, bacNhat h2) {
    bacHai kq;
    kq.a = h1.a * h2.a;
    kq.b = h1.a * h2.b + h1.b * h2.a;
    kq.c = h1.b * h2.b;
    return kq;
}
bool operator==(bacHai h1,bacHai h2) {
    return (h1.a == h2.a && h1.b == h2.b && h1.c == h2.c);
}
int main()
{
    bacHai h1, h2;
    bacNhat h3, h4;
    cin >> h1 >> h2 >> h3 >> h4;
    cin >> x;
    cout << h1;
    cout << tinhGiaTri_BacHai(h1) << endl;
    cout << h2;
    cout << tinhGiaTri_BacHai(h2) << endl;
    cout << h1 + h2;
    cout << tinhGiaTri_BacHai(h1 + h2)<< endl;
    bacHai h5 = h3 * h4;
    cout << "(" << h3 << ") * (" << h4 << ")" << " = " <<  h5;
    cout << tinhGiaTri_BacHai(h5) << endl;
    if (h1 == h2 && h2 == h5) {
    cout << "TRUE3";
    return 0;
    }
    if (h1 == h5) {
        cout << "TRUE1"; return 0;
    }
    if (h2 == (h3 * h4)) {
        cout << "TRUE2"; return 0;
    }
    cout << "FALSE";
    return 0;
}
