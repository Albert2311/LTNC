////Bài 2: Nhập vào một dãy n số nguyên. Đưa ra dãy mới toàn các số chẵn.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> v;
//    for (int i = 0; i < n; i++) {
//        int x;
//        cin >> x;
//        v.push_back(x);
//    }
//    vector<int> vv;
//    for (int i = 0; i < v.size(); i++)
//        if (v[i] % 2 == 0)
//            vv.push_back(v[i]);
//    for (int i = 0; i < vv.size(); i++)
//        cout << vv[i] << " ";
//    return 0;
//}
//
//// Bài 3: Nhập vào một dãy n số thực. Đưa ra dãy mới là dãy đảo ngược của dãy ban đầu.
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<float> v;
//    for (int i = 0; i < n; i++) {
//        float x;
//        cin >> x;
//        v.push_back(x);
//    }
//    for (vector<float>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
//        cout << *it << " ";
//    return 0;
//}
//
//
////Bài 4: Đọc vào n số nguyên từ bàn phím. Xóa bỏ số ở vị trí thứ k của dãy, với k đọc vào từ bàn phím. Đưa dãy đã xóa ra màn hình.
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    vector<int> v;
//    for (int i = 0; i < n; i++) {
//        int x;
//        cin >> x;
//        v.push_back(x);
//    }
//    v.erase(v.begin() + k);
//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i] << ' ';
//    }
//    return 0;
//}
//
////Bài 5: Đọc vào n số (2<n<50). Đọc thêm một số x, chèn số x vào vị trí thứ 2 của dãy. Đưa dãy sau khi chèn ra màn hình
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n, x;
//    cin >> n >> x;
//    vector<int> v;
//    for (int i = 0; i < n; i++) {
//        int j;
//        cin >> j;
//        v.push_back(j);
//    }
//    v.insert(v.begin() + 1, x);
//    for (int i = 0; i < v.size(); i++)
//        cout << v[i] << ' ';
//    return 0;
//}
////Bài 6: Đọc vào n số. Đọc thêm một số x, chèn số x vào vị trí thứ k của dãy với k đọc vào từ bàn phím. 
////Nếu k>n thì thêm vào vị trí thứ n. Đưa dãy sau khi chèn ra màn hình
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n, x, k;
//    cin >> n >> x >> k;
//    if (k > n)
//        k = n;
//    vector<int> v;
//    for (int i = 0; i < n; i++) {
//        int j;
//        cin >> j;
//        v.push_back(j);
//    }
//    v.insert(v.begin() + k - 1, x);
//    for (int i = 0; i < v.size(); i++)
//        cout << v[i] << " ";
//    return 0;
//}