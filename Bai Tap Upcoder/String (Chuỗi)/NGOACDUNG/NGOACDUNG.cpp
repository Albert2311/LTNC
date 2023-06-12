/**/

#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
    stack<char> nx;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            nx.push(s[i]);
        }
        else {
            if (!nx.empty()) {
                if (s[i] == ')' && nx.top() != '(') return false;
                if (s[i] == '}' && nx.top() != '{' )return false;
                if (s[i] == ']' && nx.top() != '[')return false;
                nx.pop();
            }
        }
    }
    return nx.empty();
}

int main()
{
    string a;
    getline(cin, a);
    if (check(a)) {
        cout << "yes";
    }
    else
        cout << "no";
    //stack<int> ms;
    //ms.push(10);
    //ms.push(40);
    //ms.push(30);
    //while (!ms.empty()) {
    //    cout << ms.top() << endl;
    //    ms.pop();
    //}

    return 0;
}

