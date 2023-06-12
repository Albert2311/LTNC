#include <iostream>
#include <fstream>
using namespace std;

struct DaThuc
{
	int n;
	int a[100];
	DaThuc()
	{
		n = 0;
		a[0] = 0;
	}
	int& operator [](int n)
	{
		return a[n];
	}
};

istream& operator >> (istream& is, DaThuc& p)
{
	is >> p.n;
	for (int i = p.n; i >= 0; i--)
	{
		is >> p[i];
	}
	return is;
}

ostream& operator << (ostream& os, DaThuc p)
{
	if (p[p.n] != 0)
	{
		if (p.n > 1)
		{
			if (p[p.n] == 1)
				os << "x^" << p.n;
			else if (p[p.n] == -1)
				os << "-x^" << p.n;
			else
				os << p[p.n] << "x^" << p.n;
		}
		else if (p.n == 1)
		{
			if (p[p.n] == 1)
				os << "x";
			else if (p[p.n] == -1)
				os << "-x";
			else
				os << p[p.n] << "x";
		}
		else if (p.n == 0)
		{
			os << p[0];
			return os;
		}
	}
	else if (p.n == 0)
		os << p[0];
	for (int i = p.n - 1; i > 1; i--)
	{
		if (p[i] > 0)
		{
			if (p[i] != 1)
				os << "+" << p[i] << "x^" << i;
			else
				os << "+" << "x^" << i;
		}
		else if (p[i] < 0)
		{
			if (p[i] != -1)
				os << p[i] << "x^" << i;
			else
				os << "-x^" << i;
		}
		else
			continue;
	}
	if (p[1] != 0 && p.n > 1)
	{
		if (p[1] > 0)
		{
			if (p[1] != 1)
				os << "+" << p[1] << "x";
			else
				os << "+" << "x";
		}
		else if (p[1] < 0)
		{
			if (p[1] != -1)
				os << p[1] << "x";
			else
				os << "-" << "x";
		}
	}
	if (p[0] != 0)
	{
		if (p[0] > 0)
			os << "+" << p[0];
		else if (p[0] < 0)
			os << p[0];
	}
	return os;
}

DaThuc DaoHam(DaThuc p)
{
	DaThuc result;
	if (p.n > 0)
	{
		result.n = p.n - 1;
		for (int i = result.n; i >= 0; i--)
		{
			result[i] = p[i + 1] * (i + 1);
		}
	}
	return result;
}
int main()
{
	DaThuc test;
	cin >> test;
	cout << test << endl;
	DaThuc DH1 = DaoHam(test);
	DaThuc DH2 = DaoHam(DH1);
	cout << DH1 << endl;
	cout << DH2;
	return 0;
}