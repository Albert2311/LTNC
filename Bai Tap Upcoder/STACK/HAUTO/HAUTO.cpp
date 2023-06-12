#include <bits/stdc++.h>
using namespace std;

int Stack();
int init();
int top();
int pop();
int empty();
int full();

string s;
stack<int> st;

int main() {
    while (cin >> s) {
        if (s == "+" || s == "-" || s == "*") {
            if (!st.empty()) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if (s == "+") st.push(a + b);
                if (s == "-") st.push(a - b);
                if (s == "*") st.push(a * b);
            }
        }
        else st.push(stoi(s));
    }
    cout << st.top();
    return 0;
}
