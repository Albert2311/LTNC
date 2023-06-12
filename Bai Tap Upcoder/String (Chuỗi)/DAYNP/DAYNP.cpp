#include <iostream>
#include<math.h>
#include<string>
using namespace std;

int N; //3 000 001

string NP(int n) { // 1
        string s = "";
        while (n > 0) { // 1 , 2, 3
            s = char('0' + n % 2) + s;
            n /= 2;
        }
        while (s.length() < N) {
            s = "0" + s;
        }
        return s;
}

int main()
{

    cin >> N;
    int n2 = pow(2, N);
    for (int i = 0; i < n2; i++) {
        cout << NP(i) << endl;
    }
    return 0;
}

