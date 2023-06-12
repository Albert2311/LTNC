/*Nhập vào 1 dãy số, tìm số có số đảo ngược của nó là lớn nhất    
Ví dụ 1:
Input:
123
12
1
341
Output:
123*/

#include<iostream>
#include<string>
using namespace std;
// cach 1: nhap so -> dao so ->
int reverse(int a) {
    int result = 0;
    while (a > 0) {
        result = result * 10 + a % 10;
        a /= 10;
    }
    return result;
}
// cach 2: nhap string -> daostring -> ep kieu thanh int ->
int main() {

    //cach 1
    int a[100];
    int n = 0;
    while(cin >> a[n++]){}
    n--;
    int max = a[0];
    for (int i = 0; i < n; i++) {
        //reverse(a[i]);
        if (max < reverse(a[i])) {
            max = reverse(a[i]);
        }
    }
    cout << reverse(max);
    return 0;
}

