#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<char> st;
    char x;
    while (cin >> x) {
        if (x == '[' || x == '(' || x == '{')
            st.push(x);
        else {
            if (!st.empty()) {
                if (x == ']' && st.top() == '[')
                    st.pop();
                else if (x == ')' && st.top() == '(')
                    st.pop();
                else if (x == '}' && st.top() == '{')
                    st.pop();
            }
            else
                st.push(x);
        }
    }
    if (st.empty())
        cout << "yes";
    else
        cout << "no";
    return 0;
}
