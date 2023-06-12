#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<int> a;
    int n;
    string y;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cin.ignore();
    getline(cin, y);
    if (y.size() == 1) {
        a.erase(a.begin() + (int(y[0]) - 48));

    }
    else {
        if (y == "-1") {
            a.clear();
            cout << "empty";
            return 0;
        }
        else {
            a.erase(a.begin() + (int(y[0]) - 48), a.begin() + (int(y[2]) - 48));
        }
    }

    //
    if (a.size() == 0) {
        cout << "empty";
    }
    else {
        for (auto it = a.begin(); it != a.end(); ++it) {
            cout << *it << " ";
        }
    }

    //for (int i = 0; i < a.size(); i++)
    //    cout << a[i] << " ";
    return 0;
}
