///*Nhập vào 1 dãy số, tìm số có số đảo ngược của nó là lớn nhất, nếu có nhiều hơn 2 số như vậy hãy xuất tất cả vị trí tìm thấy số đó ở dòng thứ 2 
//+ Dữ liệu vào từ file: inDaoNguoc2.txt
//+ Dữ liệu ra file: outDaoNguoc2.txt*/
//
////#include<iostream>
////#include<string>
////#include<fstream>
////using namespace std;
////
////int reverse(int a) {
////    int result = 0;
////    while (a > 0) {
////        result = result * 10 + a % 10;
////        a /= 10;
////    }
////    return result;
////}
////
////int main() {
////    ifstream in("inDaoNguoc2.txt");
////    int a[100];
////    int n = 0;
////    while (in >> a[n++]) {}
////    n--;
////    int max = a[0];
////    int count = 0;
////    int* index = new int[n];
////    ofstream out("outDaoNguoc2.txt");
////    for (int i = 0; i < n; i++) {
////        if (max < reverse(a[i])) {
////            max = reverse(a[i]);
////            count = 0;
////            index[count++] = i;
////        } else if(reverse(a[i]) == max)
////            index[count++] = i;
////    }
////    out << reverse(max) << endl;
////    if (count > 1) {
////    for (int i = 0; i < count; i++) {
////        out << index[i] << " ";
////        }
////    }
////    delete[] index;
////    in.close();
////    out.close();
////    return 0;
////}
//
//#include<iostream>
//#include<fstream>
//
//using namespace std;
//int reverse(int a) {
//    int tmp = 0;
//    while (a > 0) {
//        tmp = tmp * 10 + a % 10;
//        a /= 10;
//    }
//    return tmp;
//}
//int main() {
//    int a[100]; int n = 0;
//    int x;
//    ifstream in("inDaoNguoc2.txt");
//    ofstream out("outDaoNguoc2.txt");
//    while (in >> x) {
//        a[n++] = x;
//    }
//    int max = a[0];
//    int dem = 0;
//    int* b = new int[n];
//    for (int i = 0; i < n; i++) {
//        if (max < reverse(a[i])) {
//            max = reverse(a[i]);
//            dem = 0; //nếu max bị thay đổi thì sẽ đếm lại từ đầu và lưu vị trí i vào mảng b
//            b[dem++] = i;
//            //cout << i;
//        }
//        else if (reverse(a[i]) == max) {
//            b[dem++] = i;
//        }
//
//    }
//    out << reverse(max) << endl;
//    if (dem > 1) {
//        for (int i = 0; i < dem; i++) {
//            out << b[i] << " ";
//        }
//    }
//    delete[] b;
//    in.close();
//    out.close();
//    return 0;
//}

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int reverse(int a) {
	int tmp = 0;
	while (a > 0) {
		tmp = tmp * 10 + a % 10;
		a /= 10;
	}
	return tmp;
}

int main() {
	int a[100];
	int n = 0;
	while(cin >> a[n++]){}
	n--;
	int max = a[0]; int dem = 0;
	int b[100];
	for (int i = 0; i < n; i++) {
		if (max < reverse(a[i])) {
			max = reverse(a[i]);
			dem = 0;
			b[dem++] = i;
		}
		else if (reverse(a[i]) == max) {
			b[dem++] = i;
		}
	}

	cout << reverse(max) << endl;

	for (int i = 0; i < dem; i++) {
		cout << b[i] << " ";
	}
	return 0;
}