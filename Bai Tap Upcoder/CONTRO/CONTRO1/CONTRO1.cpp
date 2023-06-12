#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 1; i <= n; i++) {
        cin >> *(a + i);
    }
    int* Max;
    Max = a + 1;
    int* Min;
    Min = a + 1;
    for (int i = 2; i <= n; i++) {
        if (*Max < *(a + i))
            Max = (a + i);
        if (*Min > *(a + i))
            Min = (a + i);
    }
    cout << *Max << endl;
    for (int i = 1; i <= n; i++) {
        if (*Max == *(a + i))
            cout << i << " ";
    }
    cout << endl << *Min << endl;
    for (int i = 1; i <= n; i++) {
        if (*Min == *(a + i))
            cout << i << " ";
    }
    delete[] a;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, A[1000];
//     cin >> n;
//     for (int i = 1 ; i <= n ; i++) 
//         cin >> A[i];
//     int *Max = A;
//     for (int i = 1 ; i <= n ; i++) {
//         if (*Max < *(Max + i))
//             *Max = *(Max + i);
//     }
//     cout << *Max << endl;
//     int temp = *Max;
//     for (int i = 1 ; i <= n ; i++) {
//         if (A[i] == temp)
//             cout << i << " ";
//     }
//     cout << endl;
//     int *Min = A;
//     for (int i = 1 ; i <= n ; i++) {
//         if (*Min > *(Min + i))
//             *Min = *(Min + i);
//     }
//     cout << *Min << endl;
//     int Temp = *Min;
//     for (int i = 1 ; i <= n ; i++) {
//         if (A[i] == Temp)
//             cout << i << " ";
//     }
//     return 0;
// }


