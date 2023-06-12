#include <bits/stdc++.h>
using namespace std;

int n;
int** a;

int main() {
    cin >> n;
    a = new int* [n];
    for (int i = 0; i < n; i++)
        *(a + i) = new int[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                *(*(a + i) + j) = 1;
            else
                *(*(a + i) + j) = 0;
            cout << *(*(a + i) + j) << " ";
        }
        cout << endl;
    }
    return 0;
}