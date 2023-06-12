#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};
istream& operator >> (istream& is, PhanSo& a) {
    is >> a.tu >> a.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo a) {
    os << a.tu << "/" << a.mau;
    return os;
}
PhanSo operator++ (PhanSo a) {
    a.tu += 1;
    return a;
}
PhanSo operator-- (PhanSo a) {
    a.tu -= 1;
    return a;
}
int main()
{
   PhanSo a;
   string b;
   cin >> a;
   cin >> b;
   cout << a << endl;
  
   if (b == "++") {
       cout << ++a;
   }else
       if (b == "--") {
           cout << --a;
       }
}

