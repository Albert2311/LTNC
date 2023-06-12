//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool Chars(string s) {
//    // Kiểm tra xem từ s có chứa ký tự b, d, f, h, k, t hay không.
//    for (int i = 0; i < s.length(); i++) {
//        if (s[i] == 'b' || s[i] == 'd' || s[i] == 'f' || s[i] == 'h' || s[i] == 'k' || s[i] == 't') {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    string s, longest = "";
//    while (cin >> s) {
//        string word = "";
//        for (int i = 0; i < s.length(); i++) {
//            if (s[i] != ' ') {
//                word += s[i];
//            }
//            else {
//                // Kiểm tra từ hiện tại
//                if (!Chars(word)) {
//                    // Nếu từ hiện tại không chứa ký tự b, d, f, h, k, t
//                    if (word.length() > longest.length()) {
//                        // Nếu từ hiện tại dài hơn từ dài nhất hiện tại
//                        longest = word;
//                    }
//                }
//                word = "";
//            }
//        }
//        // Kiểm tra từ cuối cùng trong chuỗi
//        if (!Chars(word)) {
//            if (word.length() > longest.length()) {
//                longest = word;
//            }
//        }
//    }
//    cout << longest << endl;
//    return 0;
//}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool check(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'b' || s[i] == 'd' || s[i] == 'f' || s[i] == 'h' || s[i] == 'k' || s[i] == 't') {
			return true;
		}
	}
	return false;
}

int main() {
	string s; // mot chu
	string longest = "";
	while (cin >> s) {
		if (!check(s)) {
			if (s.length() > longest.length()) {
				longest = s;
			}
		}
	}
	cout << longest << endl;
	return 0;
}