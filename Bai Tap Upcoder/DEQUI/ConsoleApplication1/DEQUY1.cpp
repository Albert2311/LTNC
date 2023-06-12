#include <iostream>
#include <fstream>
#include<cmath>

using namespace std;

int a[100], n, k;

void xuatKetQua();
void Try(int i);

int main() {
	cin >> n >> k;
	cout << pow(n, k) << endl;
	Try(0);

	return 0;
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		a[i] = j;
		if (i == k - 1)
			xuatKetQua();
		else
			Try(i + 1);
	}
}

void xuatKetQua() {
	for (int i = 0; i < k; i++) {
		cout << a[i];
	}
	cout << endl;
}