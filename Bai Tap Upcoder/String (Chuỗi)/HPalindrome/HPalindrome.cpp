//#include<iostream>
//#include<fstream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool check(string s) {
//    s.erase(remove(s.begin(), s.end(), ' '), s.end());
//    transform(s.begin(), s.end(), s.begin(), ::tolower);
//    int m = s.length();
//    for (int i = 0; i < m / 2; i++) {
//        if (s[i] != s[m - i - 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    ifstream in("input.txt");
//    ofstream out("output.txt");
//    string s;
//    while (getline(in, s)) {
//        if (check(s)) {
//            out << "1" << endl;
//        }
//        else
//            out << "0" << endl;
//    }
//    in.close();
//    out.close();
//    return 0;
//}

#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;

bool check(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string a[100];
    int n = 0;
    string x;
    ifstream in("input.txt");
    ofstream out("output.txt");
    while (getline(in, a[n++])) {}
    n--;
    for (int i = 0; i < n; i++) {
        //cout << a[i] << endl;
        if (check(a[i])) {
            out << 1 << endl;
        }
        else
            out << 0 << endl;
    }
    in.close();
    out.close();
    return 0;
}
