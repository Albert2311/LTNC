#include <bits/stdc++.h>
using namespace std;

int m, M;
bool* prime;

int main() {
    cin >> m >> M;
    prime = new bool[M];
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= M; i++) {
        if (!prime[i]) {
            int x = i * i;
            while (x <= M) {
                prime[x] = 1;
                x += i;
            }
        }
    }
    for (int i = m; i <= M; i++)
        if (!prime[i])
            cout << i << " ";
    return 0;
}