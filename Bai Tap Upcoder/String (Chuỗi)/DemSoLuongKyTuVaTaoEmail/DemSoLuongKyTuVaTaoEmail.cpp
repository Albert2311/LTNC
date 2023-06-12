// http://upcoder.xyz/'index.php/3594a69f7418e3a1fffca9670d1eced99d4882cea7a8f726463e0239c37f41fa/lvypJ''yRMoOMs!z5z'lBML4.skq'uMoxMfSbwdy'wmL3'?8388?4%27h397M4lfej.~7k_eEC@88i785keP.fj52/9e34b26464c8d4f8c92f46a20505e86d8de13a65e1f258d08d5d9db776f4b411

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    char x;

    in >> x;
    x = tolower(x);
    in.ignore();
    string s, name = "";
    vector<string> names;
    map<string, int> m;
    while (getline(in, s)) {
        int count = 0;
        name = "";
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
            if (s[i] == x)
                count++;
        }
        stringstream ss(s);
        string word;
        vector<string> v;
        while (ss >> word) {
            v.push_back(word);
        }
        name += v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++)
            name += v[i][0];
        names.push_back(name);
        int countTrung = 0;
        for (int i = 0; i < names.size(); i++) {
            if (names[i] == name) {
                countTrung++;
            }
        }
        m[name] = countTrung;

        if (countTrung > 1) {
            out << count << '-' << name << countTrung;
        }
        else
            out << count << '-' << name;
        out << "@gmail.com" << endl;
    }

    int countTrungTong = 0;
    for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        if (it->second > 1)
            countTrungTong += it->second;
    }
    out << countTrungTong;

    in.close();
    out.close();
    return 0;
}











