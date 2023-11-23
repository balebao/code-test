#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // Định nghĩa và khởi tạo một vector.
    vector<int> soNguyen { 10, 20, 30, 40, 50 };

    // Hiển thị các phần tử trong vector.
    for (int giaTri : soNguyen)
        cout << giaTri << endl;

    return 0;
}
