#include <sstream>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

vector<int> toInt(string str) {
	vector<int> v;
	stringstream ss;
	string tmp = "";
	int x;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ',')
			tmp = tmp + str[i];
		if (str[i] == ',' || i == str.size() - 1) {
			//xuat ra cac chu so
			ss << tmp;
			ss >> x;
			v.push_back(x);
			ss.clear();
			tmp = "";
		}
	}

	return v;
}

int main() {
	string str;
	cin >> str;
	vector<int> v = toInt(str);

	long long sum = 0;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
		sum += v[i];
	}
	cout << sum << endl;

	return 0;
}
