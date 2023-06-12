//#include <bits/stdc++.h>
//using namespace std;
//
//int prior(string x) {
//    if (x == "+" || x == "-")
//        return 1;
//    if (x == "*" || x == "/" || x == "%" || x == "^")
//        return 2;
//}
//
//int main() {
//    stack<string> st;
//    string s;
//    while (cin >> s) {
//        if (s >= "0" && s <= "9")
//            cout << s << " ";
//        else if (s == "(")
//            st.push(s);
//        else if (s == ")") {
//            while (st.top() != "(") {
//                cout << st.top() << " ";
//                st.pop();
//            }
//            if (st.top() == "(")
//                st.pop();
//        }
//        else {
//            while (!st.empty() && st.top() != "(" && prior(st.top()) >= prior(s)) {
//                cout << st.top() << " ";
//                st.pop();
//            }
//            st.push(s);
//        }
//    }
//    while (!st.empty()) {
//        cout << st.top() << " ";
//        st.pop();
//    }
//    return 0;
//}