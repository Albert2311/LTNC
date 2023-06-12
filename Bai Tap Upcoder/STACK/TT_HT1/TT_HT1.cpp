#include<iostream>
#include<stack>
#include<string>
using namespace std;

int trungto(char x) {
    if (x == '+' || x == '-') {
        return 1;
    }
    if (x == '*' || x == '/' || x == '%' || x == '^') {
        return 2;
    }
    return 0;
}

int main() {
    stack<char> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z')) {
            cout << s[i];
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^') {
            if (!v.empty() && v.top() != '(' && trungto(v.top()) >= trungto(s[i])) {
                cout << v.top();
                v.pop();
            }
            v.push(s[i]);
        }
        else if (s[i] == '(') {
            v.push(s[i]);
        }
        else {
            if (v.top() != '(') {
                cout << v.top();
                v.pop();
            }
            if (v.top() == '(') {
                v.pop();
            }
        }
    }
    while (!v.empty()) {
        cout << v.top();
        v.pop();
    }
    return 0;
}