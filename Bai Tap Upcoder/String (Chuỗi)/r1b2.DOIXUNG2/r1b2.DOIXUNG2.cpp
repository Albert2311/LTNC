#include <iostream>
using namespace std;

int longestPalid(string s) {
    //int n = s.length();
    int maxlen = 1;

    for (int i = 0; i < s.length(); i++) {
        // le
        int left = i;
        int right = i;
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            int length = right - left + 1;
            if (maxlen < length) {
                maxlen = length;
            }
            left--;
            right++;
        }
        // chan
        left = i;
        right = i + 1;
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            int length = right - left + 1;
            if (maxlen < length) {
                maxlen = length;
            }
            left--;
            right++;
        }
    }
    return maxlen;
}

int main()
{
    string s;
    cin >> s;
    cout << longestPalid(s);
    return 0;
}

