//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <string>
//#include <stdio.h>
//using namespace std;
//struct hcn {
//    float dai, rong;
//    void operator =(hcn h) {
//        dai = h.dai;
//        rong = h.rong;
//    }
//};
//
//istream& operator >> (istream& is, hcn& h) {
//    is >> h.dai >> h.rong;
//    return is;
//}
//
//ostream& operator << (ostream& os, hcn h) {
//    os << "[HCN] " << h.dai << "," << h.rong;
//    return os;
//}
//
//float chuvi(hcn h) {
//    return (h.dai + h.rong) * 2;
//}
//
//bool operator < (hcn h1, hcn h2) {
//    return (chuvi(h1) < chuvi(h2));
//}
//
//template <class T>
//struct Mang {
//    T a[100];
//    int n;
//    T& operator [] (int i) {
//        return a[i];
//    }
//};
//
//template <class T>
//T TimMin(Mang <T> h) {
//    T Min = h[0];
//    for (int i = 0; i < h.n; i++) {
//        if (h[i] < Min) Min = h[i];
//    }
//    return Min;
//}
//
//float operator + (hcn h1, float a) {
//    return (chuvi(h1) + a);
//}
//
//int main() {
//    Mang <int> k;
//    Mang <hcn> h;
//    string s;
//    cin >> s;
//    if (s == "N") {
//        k.n = 0;
//        while (cin >> k[k.n]) {
//            k.n++;
//        }
//        cout << TimMin(k) << endl;
//        float s1 = 0;
//        for (int i = 0; i < k.n; i++) {
//            s1 = s1 + k[i];
//        }
//        cout << s1;
//    }
//    if (s == "H") {
//        h.n = 0;
//        while (cin >> h[h.n]) {
//            h.n++;
//        }
//        cout << TimMin(h) << endl;
//        float s2 = 0;
//        for (int i = 0; i < h.n; i++) {
//            s2 = s2 + chuvi(h[i]);
//        }
//        printf("%.1f", s2);
//    }
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
template <typename T>
struct Mang {
	T 
};

int main() {

	return 0;
}