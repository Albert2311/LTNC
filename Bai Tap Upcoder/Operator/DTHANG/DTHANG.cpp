#include <bits/stdc++.h>
using namespace std;
struct DTHANG {
    double a, b, c;
    DTHANG() {
        a = b = c = 0;
    }
};
// duong thang 
istream& operator>>(istream& is, DTHANG& dt) {
    is >> dt.a >> dt.b >> dt.c;
    return is;
}
ostream& operator << (ostream& os, DTHANG dt) {
    // a
    if (dt.a == 0) {
        os << "";
    }
    else if (dt.a == 1) {
        os << "x";
    }
    else os << dt.a << "x";
    // b
    if (dt.b == 0) {
        os << "";
    }else if (dt.b == 1) {
        os << (dt.a == 0 ? "": "+") << "y";
    }
    else if (dt.b > 1) {
        os << (dt.a == 0 ? "" : "+") << dt.b << "y";
    } 
    else {
        os << (dt.a == 0 ? "" : "") << dt.b << "y";
    }
    // c
    if (dt.c == 0) {
        os << "=0" << endl;
    }
    else if (dt.c > 0) {
        os << "+" << dt.c << "=0" << endl;
    }
    else {
        os << "" << dt.c << "=0" << endl;
    }
    return os;
}

bool operator == (DTHANG d1, DTHANG d2) {
    return d1.a == d2.a && d1.b == d2.b && d1.c == d2.c;
}
char VTTD(DTHANG d1, DTHANG d2) {
    int D = d1.a * d2.b - d2.a * d1.b;
    int Dx = d2.c * d1.b - d1.c * d2.b;
    int Dy = d2.a * d1.c - d1.a * d2.c;
	if (D == 0) {
		if (Dx == Dy && Dx == 0) {
			return  'T';
		}
		else if (Dx != 0 || Dy != 0) {
			return  'S';
		}
	}
	if (d1.a * d2.a + d1.b * d2.b == 0) {
			return 'V';
	}
		return 'C';
}
int UCLN(int a, int b) {
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    if (a % b == 0)
        return b;
    return UCLN(b, a % b);
}
int main()
{
    DTHANG d1, d2;
    cin >> d1 >> d2;
    cout << d1 << d2;
    cout << VTTD(d1, d2) << endl;
    int D = d1.a * d2.b - d2.a * d1.b;
    int Dx = d2.c * d1.b - d1.c * d2.b;
    int Dy = d2.a * d1.c - d1.a * d2.c;

    if (VTTD(d1, d2) == 'C'|| VTTD(d1,d2) == 'V') {
        if (Dx % D == 0) {
            cout << "(" << Dx / D << ",";
        }
        else if ((Dx < 0 && D < 0) || (Dx > 0 && D < 0)) {
            cout << "(" << -Dx / UCLN(Dx, D) << "/" << -D / UCLN(Dx, D) << ",";
        }
        else {
            cout << "(" << Dx / UCLN(Dx, D) << "/" << D / UCLN(Dx, D) << ",";
        }

        if (Dy % D == 0) {
            cout << Dy / D << ")";
        }
        else if ((Dy < 0 && D < 0) || (Dy > 0 && D < 0)) {
            cout << -Dy / UCLN(Dy, D) << "/" << -D / UCLN(Dy, D) << ")";
        }
        else {
            cout << Dy / UCLN(Dy, D) << "/" << D / UCLN(Dy, D) << ")";
        }
    }
    else if (VTTD(d1, d2) == 'S') {
        double Sx, Sy;
        if (d1.a != 0) {
            Sx = double(-d1.c / d1.a);
            Sy = 0;
        }
        else {
            Sx = 0;
            Sy = double(-d1.c / d1.b);
        }
        double KC = abs(d2.a * Sx + d2.b * Sy + d2.c) / sqrt((pow(d2.a, 2)) + pow(d2.b, 2));
        cout << roundf(KC * 1000) / 1000;
    }
    else {
        cout << "0";
    }
    return 0;
}








/*#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

double x, y;
int D, Dx, Dy;

struct DuongThang
{
	int a, b, c;
	DuongThang()
	{
		a = 0; b = 0; c = 0;
	}
};

istream& operator >> (istream& is, DuongThang& dt);
ostream& operator << (ostream& os, DuongThang dt);
bool operator == (DuongThang a, DuongThang b);
char poscmp(DuongThang dt1, DuongThang dt2);
int UCLN(int a, int b);

int main() {
	DuongThang dt1, dt2;
	cin >> dt1 >> dt2;
	cout << dt1 << endl;
	cout << dt2 << endl;
	char vitri = poscmp(dt1, dt2);
	cout << vitri << endl;
	if (vitri == 'C' || vitri == 'V')
	{
		if (Dx % D == 0)
			cout << "(" << Dx / D << ",";
		else if ((Dx > 0 && D < 0) || (Dx < 0 && D < 0))
			cout << "(" << -Dx / UCLN(Dx, D) << "/" << -D / UCLN(Dx, D) << ",";
		else
			cout << "(" << Dx / UCLN(Dx, D) << "/" << D / UCLN(Dx, D) << ",";
		if (Dy % D == 0)
			cout << Dy / D << ")" << endl;
		else if ((Dy > 0 && D < 0) || (Dy < 0 && D < 0))
			cout << -Dy / UCLN(Dy, D) << "/" << -D / UCLN(Dy, D) << ")";
		else
			cout << Dy / UCLN(Dy, D) << "/" << D / UCLN(Dy, D) << ")";
	}
	else if (vitri == 'S') {
		float Mx, My;
		if (dt1.a != 0) {
			Mx = (float)-dt1.c / dt1.a;
			My = 0;
		}
		else {
			Mx = 0;
			My = (float)-dt1.c / dt1.b;
		}
		cout << roundf((abs(dt2.a * Mx + dt2.b * My + dt2.c)
			/ sqrt(dt2.a * dt2.a + dt2.b * dt2.b)) * 1000) / 1000 << endl;
	}
	else
		cout << 0;
	return 0;
}

istream& operator >> (istream& is, DuongThang& dt)
{
	is >> dt.a >> dt.b >> dt.c;
	return is;
}
ostream& operator << (ostream& os, DuongThang dt)
{
	if (dt.a == 1)
		os << "x ";
	else if (dt.a == -1)
		os << "-x ";
	else if (dt.a != 0)
		os << dt.a << "x ";
	if (dt.a == 0)
	{
		if (dt.b == 1)
			os << "y ";
		else if (dt.b == -1)
			os << "-y";
		else
			os << dt.b << "y ";
	}
	else
	{
		if (dt.b == 1)
			os << "+ y ";
		else if (dt.b == -1)
			os << "-y";
		else if (dt.b > 0)
			os << "+ " << dt.b << "y ";
		else if (dt.b < 0)
			os << "- " << -dt.b << "y ";
	}
	if (dt.c > 0)
		os << "+ " << dt.c;
	else if (dt.c < 0)
		os << "- " << -dt.c;
	os << " = 0";
	return os;
}
bool operator == (DuongThang a, DuongThang b)
{
	return (a.a == b.a && a.b == b.b && a.c == b.c);
}
char poscmp(DuongThang dt1, DuongThang dt2)
{
	D = dt1.a * dt2.b - dt2.a * dt1.b;
	Dx = dt2.c * dt1.b - dt1.c * dt2.b;
	Dy = dt2.a * dt1.c - dt1.a * dt2.c;
	if (D == 0)
	{
		if (Dx == Dy && Dx == 0)
			return 'T';
		else if (Dx != 0 || Dy != 0)
			return 'S';
	}
	if (dt1.a * dt2.a + dt1.b * dt2.b == 0)
		return 'V';
	return 'C';
}

int UCLN(int a, int b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	if (a % b == 0)
		return b;
	return UCLN(b, a % b);
}*/