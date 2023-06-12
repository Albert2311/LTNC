#include <iostream>
#include<vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int x;
    while(cin >> x){
        a.push_back(x);
    }
    for (vector<int>::iterator i = a.begin(); i != a.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    for (auto i = a.rbegin(); i != a.rend(); i++) {
        cout << *i << " ";
    }
    return 0;
}

