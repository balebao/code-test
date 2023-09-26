#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
 // khởi tạo cho số ngẫu nhiên
    srand(time(0));

    // Tạo hai số ngẫu nhiên 
    int so1 = rand() % 1000; // Số ngẫu nhiên trong khoảng < 999
    int so2 = rand() % 1000; // Số ngẫu nhiên trong khoảng < 999

    // Hiển thị bài toán cộng
    cout << "giai bai tap sau" << endl;
    cout << so1 << endl;
    cout << "+" << endl;
    cout << so2 << endl;

    // cho nhan phim bat ki
    cout << "nhan de hien thi dap an.";
    cin.get();

    // Tính toán và hiển thị đáp án đúng
    int tong = so1 + so2;
    cout << "dap an la " << endl;
    cout << so1 << endl;
    cout << "+" << endl;
    cout << so2 << endl;
    cout << "----" << endl;
    cout << tong << endl;

    return 0;
}





