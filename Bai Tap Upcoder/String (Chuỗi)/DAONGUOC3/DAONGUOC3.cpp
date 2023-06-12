/*Ví dụ:
input:
I am a student

output:
student a am I*/

//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <sstream>
//using namespace std;
//int main() {
//	string a;
//	getline(cin, a);
//	string b[1000];
//	int n = 0;
//	stringstream ss(a);
//	while(ss>>b[n++]){}
//	n--;
//	for (int i = n - 1; i >= 0; i--) {
//		cout << b[i] << " ";
//	}
//}

#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main() {
	string s;
	int n = 0;
	getline(cin, s);
	stringstream ss(s);
	string a[100];
	while (ss >> a[n++]) {}
	n--;
	for (int i = n - 1; i >= 0; i--){ 
		cout << a[i] << " ";
	}
	return 0;
}
