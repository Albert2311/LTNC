#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<int> a;
    int x; // phantu vector
    string y; // nhap vao phantu xoa
    getline(cin, y);
    while (cin >> x) {
        a.push_back(x);
    }
    if (y.size() == 1) {
        for (unsigned i = 0; i < a.size(); ++i) {
            a.erase(a.begin() + (int(y[0]) - 48));
        }
    }
    else {
        if (y == "-1") {
            a.clear();
            cout << "empty";
            return 0;
        }
        else {
            for (unsigned i = 0; i < a.size(); i++) {
                a.erase(a.begin() + (y[0] - 48), a.begin() + (y[2] - 48) - 1);
            }

        }
        
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    //sort(a.begin(), a.end(), greater<int>());
    //for (unsigned i = 0; i < a.size();++i) {
    //    cout << a[i] << " ";
    //}
    return 0;
}

