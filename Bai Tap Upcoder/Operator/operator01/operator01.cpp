#include <iostream>
using namespace std;

struct Phanso
{
	int tu;
	int mau;
};
typedef Phanso ps;
istream& operator >> (istream& is, ps& ps)
{
	is >> ps.tu >> ps.mau;
	return is;
}
ostream& operator << (ostream& os, ps ps)
{
	os << ps.tu << "/" << ps.mau;
	return os;
}
int UCLN(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
bool operator > (ps a, ps b)
{
	return a.tu * b.mau < a.mau* b.tu;
}
bool operator < (ps a, ps b)
{
	return a.tu * b.mau > a.mau * b.tu;
}
struct Mang
{
	ps a[100];
	int n;
	ps& operator [](int i)
	{
		return a[i];
	}
};
istream& operator >> (istream& is, Mang& m)
{
	is >> m.n;
	for (int i = 0; i < m.n; i++)
	{
		is >> m.a[i];
	}
	return is;
}
ostream& operator << (ostream& os, Mang m)
{
	for (int i = 0; i < m.n; i++)
	{
		os << m.a[i] << " ";
	}
	return  os;
}
int main()
{
	Mang a;
	cin >> a;
	for (int i = 0; i < a.n; i++)
	{
		for (int j = i + 1; j < a.n; j++)
		{
			if (a[i] < a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
	for (int i = 0; i < a.n; i++)
	{
		int t = UCLN(a[i].tu, a[i].mau);
		a[i].tu = a[i].tu / t;
		a[i].mau = a[i].mau / t;
		cout << a[i] << " ";
	}
}