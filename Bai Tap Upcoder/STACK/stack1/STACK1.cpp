#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<char> a;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
            a.push(s[i]);
        }
        if (s[i] == '*') {
            if (!a.empty()) {
                cout << a.top();
                a.pop();

            }
        }
    }
    return 0;
}