/*Nhập vào 1 số gồm 3 chữ số, yêu cầu xuất số đó theo thứ tự ngược lại

ví dụ
input 
123

output
321*/
#include <iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	reverse(a.begin(), a.end());
	cout << a;

	return 0;
}
