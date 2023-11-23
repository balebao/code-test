#include <iostream>
using namespace std;
int main(){


    //khai báo các biến đơn vị
    int char_variable,
        int_variable,
        float_variable,
        double_variable;

    //kết quả hiển thị
    cout << "dung luong bo nho kieu char la:  " << sizeof(char) << " byte";
    cout << "\ndung luong bo nho kieu int la:  " << sizeof(int) << " byte";
    cout << "\ndung luong bo nho kieu float la:  " <<  sizeof(float) << " byte";
    cout << "\ndung luong bo nho kieu double la:  " << sizeof(double) << " byte" << endl;


    return 0;
}