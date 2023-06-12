#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s_tim, s_nhap;
    getline(cin, s_tim);

    for (int i = 0; i < n; i++) {
        int count = 0;
        getline(cin, s_nhap);
        size_t pos = 0;
        while ((pos = s_nhap.find(s_tim, pos)) != string::npos) {
            count++;
            pos += s_nhap.find(s_tim) + 1;
        }

        // cout << s_tim<<endl;
        // cout << s_nhap<<endl;
        cout << count << endl;
    }

    return 0;
}


