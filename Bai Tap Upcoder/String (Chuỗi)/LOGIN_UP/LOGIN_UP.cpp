#include <bits/stdc++.h>
using namespace std;
int main() {
    char a;
    int i = 0, dem = 0;
    string s = "upcoder";
    while (cin >> a) {
        if (a == s[i]) {
            i++;
            dem++;
        }
    }
    if (dem == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}