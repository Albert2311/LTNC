#include <bits/stdc++.h>
using namespace std;

string s, x = "";
string t;

int main() {
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            x += s[i];
    }
    t = x;
    reverse(t.begin(), t.end());
    if (t == x)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
