 #include<iostream>
 #include<string>
 using namespace std;
 bool KT1(string s)
 {
 	if (s[0] != '0')
 		return false;
 	if (s.length() < 10||s.length()>10)
 		return false;
 	else
 	{
 		for (string::iterator it = s.begin(); it != s.end(); it++)
 		{
 			if ((int)* it < 48 || (int)* it>57)
 				return false;
 		}
 		return true;
 	}
 }
 string SDT(string s)
 {
 	char x, y, z;
 	x = s[1];
 	y = s[2];
 	z = s[3];
 	switch (x)
 	{
 	case '4':
 		return "Ha Noi - "+s.substr(2,8);
 		break;
 	case '8':
 		return "TPHCM - "+ s.substr(2, 8);
 		break;
 	case '5':
 		if (y == '9')
 			return "Gia Lai - "+ s.substr(3, 7);
 		else if (y == '1' && z == '1')
 			return "Da Nang - "+ s.substr(4, 6);
 		break;
 	case '6':
 		if (y == '1')
 			return "Dong Nai - "+ s.substr(3, 7);
 		break;
 	case '7':
 		if (y == '1' && z == '0')
 			return "Can Tho - "+ s.substr(4, 6);
 	default:
 		return "Khong hop le";
 		break;

 	}
 }
 int main()
 {
 	string a;
 	cin >> a;
 	if (KT1(a))
 		cout << SDT(a);
 	else
 		cout << "Khong hop le";

 	return 0;
 }