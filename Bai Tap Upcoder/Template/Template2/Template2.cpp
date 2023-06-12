//#include <bits/stdc++.h>
//using namespace std;
//
//template <typename Temp>
//struct Mang {
//    int n;
//    Temp a[100];
//    Temp& operator[] (int i) {
//        return a[i];
//    }
//    Mang() {
//        n = 0;
//    }
//};
//
//struct PhanSo {
//    int Tu, Mau;
//    void operator= (PhanSo p) {
//        Tu = p.Tu;
//        Mau = p.Mau;
//    }
//};
//istream& operator>> (istream& is, PhanSo& p) {
//    is >> p.Tu >> p.Mau;
//    return is;
//}
//ostream& operator<< (ostream& os, PhanSo p) {
//    os << p.Tu << "/" << p.Mau;
//    return os;
//}
//
//int UCLN(int a, int b) {
//    while (b > 0) {
//        int r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//
//PhanSo rutGon(PhanSo A) {
//    int a = UCLN(A.Tu, A.Mau);
//    A.Tu /= a;
//    A.Mau /= a;
//    return A;
//}
//
//PhanSo operator+ (PhanSo A, PhanSo B) {
//    PhanSo Tong;
//    Tong.Tu = A.Tu * B.Mau + A.Mau * B.Tu;
//    Tong.Mau = A.Mau * B.Mau;
//    return rutGon(Tong);
//}
//
//template <typename Temp>
//Temp tongPhanTu(Mang<Temp> mang) {
//    Temp Tong = mang[0];
//    for (int i = 1; i < mang.n; i++) {
//        Tong = Tong + mang[i];
//    }
//    return Tong;
//}
//
//int main() {
//    char Type;
//    cin >> Type;
//    switch (Type) {
//    case 'a': {
//        Mang<int> mangA;
//        int x;
//        while (cin >> x) {
//            mangA[mangA.n++] = x;
//        }
//        cout << tongPhanTu<int>(mangA);
//        break;
//    }
//    case 'b': {
//        Mang<PhanSo> mangB;
//        PhanSo ps;
//        while (cin >> ps) {
//            mangB[mangB.n++] = ps;
//        }
//        cout << tongPhanTu<PhanSo>(mangB);
//        break;
//    }
//    }
//    return 0;
//}



#include<bits/stdc++.h>
using namespace std;

struct PS {
    int tu, mau;
    PS& operator=(PS a) {
        tu = a.tu;
        mau = a.mau;
    }
    PS() {
        tu = 1;
        mau = 1;
    }
};
template<typename T>
struct Mang {
    int n;
    T a[1000];
    T& operator[](int i) {
        return a[i];
    }
};
int ucln(int a, int b) {
    while (b > 0) {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}
PS rutGon(PS a) {
    int x = ucln(a.tu, a.mau);
    a.tu /= x;
    a.mau /= x;
    return a;
}
istream& operator>>(istream& is, PS& a) {
    is >> a.tu >> a.mau;
    return is;
}
ostream& operator<<(ostream& os, PS a) {
    os << a.tu << "/" << a.mau;
    rutGon(a);
    return os;
}
PS operator+(PS a, PS b) {
    PS kq;
    kq.tu = a.tu * b.mau + a.mau * b.tu;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}
template<typename T>
T tong(Mang<T> a) {
    T tong = a[0];
    for (int i = 1; i < a.n; i++) {
        tong = tong + a[i];
    }
    return tong;
}
int main() {
    char type;
    cin >> type;
    if (type == 'a') {
        Mang<int> a;
        int n;
        while (cin >> n) {
            a.a[a.n++] = n;
        }
        cout << tong(Mang<int>(a));
    }
    if (type == 'b') {
        Mang<PS> b;
        PS ps;
        while (cin >> ps) {
            b.a[b.n++] = ps;
        }
        cout << tong(Mang<PS>(b));
    }
    return 0;
}

/*Xây dựng 1 cấu trúc mảng (hoặc lớp) có sử dụng khuôn hình, áp dụng cho bài sau:

          Viết chương trình nhập vào 1 dãy số, yêu cầu xuất ra tổng của các dãy số đó ra màn hình.

Với các qui ước:

-      Kiểu a: là số nguyên

-      Kiểu b: là phân số

Dữ liệu đầu vào:

-      Dòng đầu tiên: nhập vào loại kiểu của dãy số (kiểu a hoặc b)

-      Các dòng còn lại, mỗi dòng chứa 1 số thuộc kiểu của dòng đầu tiên

Dữ liệu đầu ra:

-      Gồm 1 số duy nhất (thuộc kiểu đã cho).

Lưu ý:  

- Nếu kết quả là phân số thì phân số đó đã được rút gọn.

Ví dụ 1:

Input:
a
1
2
3
4
Output:		  10

Ví dụ 2:
Input:
b
1 2
2 3
3 4
4 5
Output:		  163/60
*/

