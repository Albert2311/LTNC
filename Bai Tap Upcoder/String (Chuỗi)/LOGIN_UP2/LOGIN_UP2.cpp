#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

char a[501][101], demo[] = "upcoder";
int n, m = 0, dd[501];

int check(char a[])
{
    int j = 0;
    for (int i = 0; i < strlen(a); i++)
        if (a[i] == demo[j])
        {
            j++;
            if (j == 7)
                return 1;
        }
    return 0;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dd[i] = 0;
    }

    for (int i = 0; i < n; i++)
        if (check(a[i]))
        {
            dd[i] = 1;
            m++;
        }
    cout << m << endl;
    for (int i = 0; i < n; i++)
        if (dd[i])
            cout << i + 1 << " ";
    return 0;
}