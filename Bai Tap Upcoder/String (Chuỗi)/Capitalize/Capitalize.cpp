//#include <bits/stdc++.h>
//using namespace std;
//
//string s, token;
//stringstream ss;
//
//int main() {
//    getline(cin, s);
//    ss << s;
//    while (ss >> token) {
//        if (token[0] >= 'a' && token[0] <= 'z')
//            token[0] = char(int(token[0]) - 32);
//        for (int i = 1; i < token.size(); i++) {
//            if (token[i] >= 'A' && token[i] <= 'Z')
//                token[i] = char(int(token[i]) + 32);
//        }
//        cout << token << " ";
//    }
//    return 0;
//}

#include<iostream>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        if (s[0] >= 'a' && s[0] <= 'z') {
            s[0] = int(s[0]) - 32;
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = int(s[i]) + 32;
            }
            /*s[i] = tolower(s[i]);
            s[0] = toupper(s[0]);*/
        }
    cout << s << " ";
    }
    return 0;
}