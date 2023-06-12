#include <iostream>
#include <string>
using namespace std;

string s;
int n, t, dem;

int main() {
    cin >> n;
    cin.ignore();
    while (n > 0) {
        getline(cin, s);
        dem = 0;
        t = s.find("Happy new year 2017");
        while (t != -1) {
            dem++;
            t = s.find("Happy new year 2017", t + 1);
        }
        cout << dem;
        if (n > 1)
            cout << endl;
        n--;
    }
    return 0;
}