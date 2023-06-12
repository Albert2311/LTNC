#include<iostream>
#include<string>
using namespace std;

int main()
{
    string X, Y;
    getline(cin, X);
    getline(cin, Y);
    //X.erase(remove(X.begin(), X.end(), ' '), X.end());
    //Y.erase(remove(Y.begin(), Y.end(), ' '), Y.end());

    int i = 0, j = 0, count = 0;
    while (i < X.length() && j < Y.length()) {
        if (X[i] == Y[j]) {
            i++;
            j++;
        }
        else {
            j++;
            count++;
        }
    }

    if (i == X.length()) {
        cout << "YES" << endl;
        cout << count << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}