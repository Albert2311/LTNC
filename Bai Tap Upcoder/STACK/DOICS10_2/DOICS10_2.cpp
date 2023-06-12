#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> v;
    int a;
    cin >> a;
    if (a == 0) {
        cout << 0;
        return 0;
    }
    while (a > 0) {
        v.push(a % 2);
        a /= 2;
    }
    while (!v.empty()) {
        cout << v.top();
        v.pop();
    }
    return 0;
}

