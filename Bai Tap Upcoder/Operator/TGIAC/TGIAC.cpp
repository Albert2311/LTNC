/*Yêu cầu 1:  Xây dựng cấu trúc ĐIỂM gồm tung độ và hoành độ (số nguyên)
-      Viết quá tải hàm nhập,xuất điểm
-      Viết hàm tính khoảng cách giữa 2 điểm
-      Viết quá tải so sánh bằng giữa 2 điểm: kiểm tra 2 điểm có trùng nhau không?
Yêu cầu 2: Xây dựng cấu trúc TAMGIAC gồm 3 điểm (PHẢI dựa vào cấu trúc ĐIỂM ở trên)
-      Viết quá tải hàm nhập,xuất (không cần kiểm tra điều kiện của tam giác, giả sư với 3 điểm bất kỳ đều là tam giác)
-      Viết hàm tính chu vi tam giác
-     Quá tải toán tử + hai tam giác (HD: cộng chu vi tam giác)
-      Quá tải toán tử <  dùng để so sánh 2 tam giác (HD: so sánh dựa vào chu vi)
-      Quá tải toán tử so sánh bằng dùng kiểm tra 2 TAM GIÁC có trùng nhau hay không?
Yêu cầu 3: nhập dữ liệu tọa độ của 2 tam giác theo cấu trúc
-      Dòng 1: 3 điểm của tam giác 1
-      Dòng 2: 3 điểm của tam giác 2
Xuất kết quả theo cấu trúc sau:
-      Dòng 1: xuất các tọa độ của tam giác 1
-      Dòng 2: xuất các tọa độ của tam giác 2
-      Dòng 1: ghi TRUE, nếu tam giác 1 < tam giác 2, ngược lại ghi FALSE
-      Dòng 2: ghi TRUE, nếu 2 tam giác trùng nhau, ngược lại ghi FALSE
Ví dụ:

Input:
1 2 3 4 5 6
7 8 9 0 1 2
Output:
(1,2)(3,4)(5,6)
(7,8)(9,0)(1,2)
TRUE
FALSE.

*/
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
struct Diem {
    int x, y;
    void operator = (Diem a) {
        x = a.x;
        y = a.y;
    }
    Diem() {
        x = 0;
        y = 0;
    }
};
istream& operator >> (istream& is, Diem& d) {
    is >> d.x >> d.y;
    return is;
}

ostream& operator << (ostream& os, Diem d) {
    os << "(" << d.x << "," << d.y << ")" << " ";
    return os;
}

bool operator==(Diem a, Diem b) {
    if (a.x == b.x && a.y == b.y)
        return true;
    return false;
}
double tinhKhoangCach(Diem a, Diem b) {
    int d;
    d = sqrt ((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
    return d;
}

struct TamGiac {
    Diem a,b,c;
    void operator= (TamGiac tg) {
        a = tg.a;
        b = tg.b;
        c = tg.c;
    }
};
istream& operator >> (istream& is, TamGiac& d) {
    is >> d.a >> d.b >> d.c;
    return is;
}
ostream& operator << (ostream& os, TamGiac d) {
    os << d.a << d.b << d.c;
    return os;
}
double tinhChuViTG(TamGiac tg) {
    double P;
    double AB = tinhKhoangCach(tg.a, tg.b);
    double AC = tinhKhoangCach(tg.a, tg.c);
    double BC = tinhKhoangCach(tg.b, tg.c);
    P = AB + AC + BC;
    return P;
}
/*TamGiac operator+ (TamGiac tg1, TamGiac tg2) {
    double P3;
    P3 = tinhChuViTG(tg1) + tinhChuViTG(tg2);
    return tg1;
}*/
bool operator< (TamGiac a, TamGiac b) {
    return tinhChuViTG(a) < tinhChuViTG(b);
}
bool kiemtra(Diem a, Diem b) {
    if (a.y == b.y && a.x == b.x)
        return true;
    return false;
}
bool operator==(TamGiac tg1, TamGiac tg2) {
    if (kiemtra(tg1.a, tg2.a) || kiemtra(tg1.a, tg2.b) || kiemtra(tg1.a, tg2.c) &&
        kiemtra(tg1.b, tg2.a) || kiemtra(tg1.b, tg2.b) || kiemtra(tg1.b, tg2.c) &&
        kiemtra(tg1.c, tg2.a) || kiemtra(tg1.c, tg2.b) || kiemtra(tg1.c, tg2.c))
        return true;
    return false;
}
int main()
{
    TamGiac tg1, tg2;
    cin >> tg1 >> tg2;
    cout << tg1 << "\n" << tg2 << endl;
    if (tg1 < tg2) {
        cout << "TRUE" << endl;
    }
    else {
       cout << "FALSE" << endl;
    }
    if (tg1 == tg2) {
        cout << "TRUE" << endl;
    }
    else
        cout << "FALSE";
    return 0;
}
