#include <iostream>
#include<string>
using namespace std;
void demso(string& s)
{
	int dem = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ' && s[i + 1] == ' ')
		{
			dem++;
		}
	}

	if (s.size() - 1 != ' ')
	{
		dem++;
	}

	cout << dem << "\n";
}
int main()
{
	string s;
	while (getline(cin, s))
	{
		demso(s);
	}
	return 0;
}