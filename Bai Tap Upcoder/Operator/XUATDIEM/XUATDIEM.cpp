/*Yêu cầu 1:

Xây dựng cấu trúc Điểm gồm hoành độ và tung độ là 2 số nguyên,yêu cầu viết các quá tải

·    >> nhập điểm

·    << xuất điểm – cách xuất theo dạng (x,y)

·    Viết quá tải == (kiểm tra 2 điểm có trùng nhau không? )

·    Viết quá tải < (so sánh theo kiểu “từ điển” - so sánh theo thứ tự ưu tiên hoành độ -> tung độ)

·    Quá tải toán tử + cộng 2 điểm trả về 1 Điểm có tung độ bằng tổng 2 tung độ và hoành độ bằng tổng 2 hoành độ.

Xây dựng cấu trúc Mảng 1 chiều dùng để lưu 1 dãy Điểm thuộc cấu trúc trên, yêu cầu viết các quá tải: >>, <<, +

Yêu cầu 2:

Viết chương trình nhập vào 1 dãy điểm, yêu cầu tìm điểm “lớn nhất” và xuất tổng điểm ra màn hình.
Input	   Output
1 2        (5,6)
3 4        (9,12)
5 6


*/
#include <iostream>
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
    os << "(" << d.x << "," << d.y << ")" << endl;
    return os;
}
bool operator==(Diem d1, Diem d2) {
    if (d1.x == d2.x && d1.y == d2.y)
        return true;
    return false;
}
bool operator< (Diem d1, Diem d2) {
    if (d1.x < d2.x) {
        return true;
    }
    else if (d1.x == d2.x) {
        if (d1.y < d2.y)
            return true;
        return false;
    }
    if (d1.x > d2.x)
        return false;
}
Diem operator+ (Diem a, Diem b) {
    Diem kq;
    kq.x = a.x + b.x;
    kq.y = a.y + b.y;
    return kq;
}
int main()
{
    Diem a[100];
    int n = 0;
    while (cin >> a[n]) {
        n++;
    }
    Diem max = a[0];
    Diem sum;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
        if (max < a[i])
            max = a[i];
    }
    cout << max;
    cout << sum;
    return 0;
}

