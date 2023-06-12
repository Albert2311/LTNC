#include <bits/stdc++.h>
using namespace std;

class SoPhuc {
private:
    int a, b;
public:
    int geta() { return a; }
    void seta(int _a) { a = _a; }
    int getb() { return b; }
    void setb(int _b) { b = _b; }

    SoPhuc(int _a = 0, int _b = 0) {
        a = _a;
        b = _b;
    }
    SoPhuc(const SoPhuc& z) {
        a = z.a;
        b = z.b;
    }
    ~SoPhuc() {}

    friend istream& operator>> (istream& is, SoPhuc& z) {
        is >> z.a >> z.b;
        return is;
    }
    friend ostream& operator<< (ostream& os, SoPhuc z) {
        os << "{";
        if (z.a != 0) {
            os << z.a;
            if (z.b == 1)
                os << "+i}";
            else {
                if (z.b == -1)
                    os << "-i}";
                else {
                    if (z.b < 0)
                        os << "-" << abs(z.b) << "i}";
                    if (z.b > 0)
                        os << "+" << abs(z.b) << "i}";
                    if (z.b == 0)
                        os << "}";
                }
            }

        }
        else {
            if (z.b == 1)
                os << "i}";
            else {
                if (z.b == -1)
                    os << "-i}";
                else {
                    if (z.b < 0)
                        os << "-" << abs(z.b) << "i}";
                    if (z.b > 0)
                        os << abs(z.b) << "i}";
                    if (z.b == 0)
                        os << "}";
                }
            }

        }
        return os;
    }
    SoPhuc operator+ (SoPhuc z) {
        this->a = this->a + z.a;
        this->b = this->b + z.b;
        return *this;
    }
    SoPhuc operator- (SoPhuc z) {
        this->a = this->a - z.a;
        this->b = this->b - z.b;
        return *this;
    }
    float modun() {
        float s = a * a + b * b;
        return sqrt(s);
    }
};

long n;
SoPhuc temp[100000], Tong;
SoPhuc* z;

int main() {
    n = 0;
    while (cin >> temp[n])
        n++;
    z = temp;
    for (long i = 0; i < n; i++) {
        cout << *(z + i) << " ";
        Tong = Tong + *(z + i);
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        SoPhuc a = *(z + i);
        cout << fixed << setprecision(2) << a.modun() << " ";
    }
    cout << endl;
    cout << Tong;
    return 0;
}


