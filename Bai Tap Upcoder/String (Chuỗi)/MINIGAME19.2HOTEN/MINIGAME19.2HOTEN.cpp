#include <iostream>
#include <string>
using namespace std;
void hoTen(string s[], int i) {
    cout << "Ho: " << s[0] << endl;
    if (i > 2) {
        cout << "Lot: ";
        for (int j = 1; j < i - 1; j++)
            cout << s[j] << " ";
        cout << endl;
    }
    cout << "Ten: " << s[i - 1];
}
int main() {
    string s[50];
    int i = 0;
    while (cin >> s[i])
        i++;
    hoTen(s, i);
    return 0;
}