#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();
    vector<string> items;
    for (int i = 0; i < n; i++) {
        string s, res = "";
        getline(cin, s);
        stringstream ss(s);
        vector<string> v;
        while (ss >> s) {
            res += toupper(s[0]);
            v.push_back(s);
        }
        int l = v.size();
        vector<string>::iterator it = find(items.begin(), items.end(), res);
        while (it != items.end()) {
            res = "";
            for (int j = 0; j < l; j++) {
                res += toupper(v[j][0]);
            }
            res += v[l - 1][v[l - 1].size() - 1];
            for (int j = l; j < v.size(); j++) {
                res += toupper(v[j][0]);
                res += v[j][v[j].size() - 1];
            }
            l--;
            it = find(items.begin(), items.end(), res);
        }
        items.push_back(res);
        cout << res << endl;
    }

    return 0;
}