//#include <bits/stdc++.h>
//using namespace std;
//
//struct Stack {};
//void init();
//void push(Stack& st, int x);
//int top(Stack st);
//void pop(Stack& st);
//bool empty(Stack st);
//bool full(Stack st);
//
//int prior(char x) {
//    return (x == '+' || x == '-') ? 1 :
//        (x == '*' || x == '/' || x == '%') ? 2 : 0;
//}
//
//string s;
//stack<char> st;
//
//int main() {
//    cin >> s;
//    for (int i = 0; i < s.size(); i++) {
//        if (isdigit(s[i]))
//            cout << s[i] << " ";
//        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%') {
//            while (!st.empty() && st.top() != '(' && prior(st.top()) >= prior(s[i])) {
//                cout << st.top() << " ";
//                st.pop();
//            }
//            st.push(s[i]);
//        }
//        else if (s[i] == '(')
//            st.push(s[i]);
//        else {
//            while (st.top() != '(') {
//                cout << st.top() << " ";
//                st.pop();
//            }
//            if (st.top() == '(')
//                st.pop();
//        }
//    }
//    while (!st.empty()) {
//        cout << st.top() << " ";
//        st.pop();
//    }
//    return 0;
//}
//
//

//#include<iostream>
//#include<stack>
//using namespace std;
//struct Stack {};
//void init();
//void push(Stack& v, int x);
//int top(Stack v);
//void pop(Stack& v);
//bool empty(Stack v);
//bool full(Stack v);
//
//int hauto(char x) {
//	if (x == '+' || x == '-') {
//		return 1;
//	}
//	if (x == '*' || x == '/' || x == '%') {
//		return 2;
//	}
//	return 0;
//
//}
//
//int main() {
//	stack<char> v;
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.size(); i++) {
//		if (isdigit(s[i])) {
//			cout << s[i] << " ";
//		}
//		else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%') {
//			if (!v.empty() && v.top() != '(' && hauto(v.top()) >= hauto(s[i])) {
//				cout << v.top() << " ";
//				v.pop();
//			}
//			v.push(s[i]);
//		}
//		else if (s[i] == '(') {
//			v.push(s[i]);
//		}
//		else {
//			if (v.top() != '(') {
//				cout << v.top() << " ";
//				v.pop();
//
//				if (v.top() == '(') {
//					v.pop();
//				}
//			}
//		}
//	}
//		while (!v.empty()) {
//			cout << v.top() << " ";
//			v.pop();
//		}
//		return 0;
//}

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int hauto(char x) {
	if (x == '+' || x == '-') {
		return 1;
	}
	if (x == '*' || x == '/' || x == '%') {
		return 2;
	}
	return 0;
}
int main() {
	stack<char> v;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (isdigit(s[i])) {
			cout << s[i] << " ";
		}
		else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%') {
			if (!v.empty() && v.top() != '(' && hauto(v.top()) >= hauto(s[i])){
				cout << v.top() << " ";
				v.pop();
			}
			v.push(s[i]);
		}
		else if (s[i] == '(') {
			v.push(s[i]);
		}
		else {
			if (v.top() != '(') {
				cout << v.top() << " ";
				v.pop();
			}
			if (v.top() == '(') {
				v.pop();
			}
		}
	}
	while (!v.empty()) {
		cout << v.top() << " ";
		v.pop();
	}
	return 0;
}