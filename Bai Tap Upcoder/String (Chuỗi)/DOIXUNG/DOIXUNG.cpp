/*Input
3
MADAM
NA DAN
AB
Output
1
1
0*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool is_check(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    /*for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            s.erase(s.begin() + i, s.begin() + i + 1);
        }
    }*/

    for (int i = 0; i < (s.length() / 2); i++) {
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        cout << is_check(s)<<endl;
    }

    return 0;
}

