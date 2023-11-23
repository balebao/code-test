#include <iostream>
using namespace std;
int main (){
 int thang,nam;
 cout << " nhap thang\n";
 cin >> thang;
 cout <<" nhap nam\n";
 cin >> nam;
  
  int thang31Ngay = 0;
  int thgle[] = {1, 3, 5, 7, 8, 10, 12};
for(int i = 0;i < 7; i++){
 if (thang == thgle[i]){
    thang31Ngay = 1;
    break;
        }
    }
    if (thang == 2) {
        // Kiểm tra năm nhuận
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            cout << "Thng 2 nam " << nam << " nhuan co 29 ngay" << endl;
        } else {
            cout << "Thang 2 nam " << nam << " kh nhuan co 28 ngay." << endl;
        }
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        cout << "Thang " << thang << " nam  " << nam << " co 30 ngay." << endl;
    } else if (thang31Ngay) {
        cout << "Thang " << thang << " nam " << nam << " co 31 ngay." << endl;
    } else {
        cout << "Thang kh hop le." << endl;
    }

    return 0;
}
