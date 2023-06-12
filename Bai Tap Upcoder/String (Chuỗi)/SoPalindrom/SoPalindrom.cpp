/*Một số nguyên gọi là palindrom nếu nó đọc từ trái sang cũng bằng đọc từ phải sang. Ví dụ 121 là số palindrom.
Yêu cầu:
-         Hãy xây dựng hàm kiểm tra một số có phải là palindrom hay không?
-         Viết chương trình sử dụng hàm đã viết để in ra các số palindrom.
Dữ liệu vào trong gồm n + 1 dòng:
-         dòng đầu ghi số n ( 0 < n < 1000 )
-         n dòng còn lại mỗi dòng ghi một số nguyên dương m (0< m <106)
Kết quả in ra màn hình các số Palindrom
Ví dụ: 
4
102
121
250
9889
Kết quả xuất ra màn hình các số Palindrom là:  
121   9889*/
#include <iostream>
using namespace std;

int reverse(int a) {
    int result = 0;
    while (a > 0) {
        result = result * 10 + a % 10;
        a /= 10;
    }
    return result;
}

int main()
{
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (reverse(a[i]) == a[i]) {
            cout << a[i] << " ";
        }
    }
    return 0;
}

