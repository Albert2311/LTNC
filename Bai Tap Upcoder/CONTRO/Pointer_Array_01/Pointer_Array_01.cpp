#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, j = 0, dem = 0;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    int* c = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }
    for (int i = n - 1; i >= 0; i--) {
        *(b + j) = *(a + i);
        j++;
    }
    n /= 2;
    for (int i = 0; i < n; i++) {
        if (*(b + i) != *(a + i)) {
            *(c + dem) = i;
            dem++;
        }
    }
    if (dem == 0) {
        cout << "mang doi xung";
    }
    else {
        cout << "mang khong doi xung" << endl;
        for (int i = 0; i < dem; i++) {
            cout << *(a + *(c + i)) << " " << *(b + *(c + i)) << endl;
        }
    }
    return 0;
}