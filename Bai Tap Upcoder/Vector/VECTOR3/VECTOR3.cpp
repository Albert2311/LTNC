#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

bool SCP(int a) {
    if ((float)sqrt(a) == (int)sqrt(a)) {
        return true;
    }
}

int main()
{
    vector<int>a;
    int x;
    while (cin >> x) {
        a.push_back(x);
    }
    for (int i = 0; i < a.size(); i++) {
        if (!SCP(a[i])) {
            if (a[i] % 2 == 0) {
                sort(a.begin(), a.end());
                cout << a[i] << " ";
            }
        }
        //cout << a[i] << " ";
    }
    return 0;
}