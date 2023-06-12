#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    string str_a = to_string(a); // chuyển a thành chuỗi
    string res = "1";
    for (int i = 0; i < n; i++) {
        string temp = "";
        int carry = 0;
        for (int j = str_a.size() - 1; j >= 0; j--) {
            int num = (str_a[j] - '0') * (res[res.size() - 1] - '0') + carry;
            temp = char(num % 10 + '0') + temp;
            carry = num / 10;
        }
        if (carry > 0) {
            temp = char(carry + '0') + temp;
        }
        res = temp;
    }
    cout << res[res.size() - 1] << endl; // lấy ký tự cuối cùng của chuỗi res
    return 0;
}
