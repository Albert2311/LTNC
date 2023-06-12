//#include <iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool anagram(string s1, string s2) {
//    if (s1.length() != s2.length()) {
//        return false;
//    }
//    sort(s1.begin(), s1.end());
//    sort(s2.begin(), s2.end());
//    for (int i = 0; i < s1.length(); i++) {
//        if (s1[i] != s2[i]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    string s1, s2;
//    getline(cin, s1);
//    getline(cin, s2);
//
//    //for (int i = s1.length() - 1; i >= 0; i--) {
//    //    cout << s1[i];
//    //}
//    
//    if (anagram(s1,s2)) {
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//    return 0;
//}
//

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool anagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (anagram(s1, s2)) {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
