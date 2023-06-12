#include <iostream>
#include<queue>
using namespace std;
int main()
{
    queue<char> v;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z') {
            v.push(a[i]);
        }
        if (a[i] == '*') {
            cout << v.front();
            v.pop();
        }
    }
    return 0;
}

