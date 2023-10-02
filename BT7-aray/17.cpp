#include <iostream>
using namespace std;

// Khai báo nguyên mẫu hàm
void hienThiGiaTri(int[], int);

int main()
{
    const int sizeMANG = 8;
    int numbers[sizeMANG] = {5, 10, 15, 20, 25, 30, 35, 40};

    hienThiGiaTri(numbers, sizeMANG);

    return 0;
}

// Định nghĩa hàm hienThiGiaTri
void hienThiGiaTri(int nums[], int kichThuoc)
{
    for (int index = 0; index < kichThuoc; index++)
    {
        cout << nums[index] << " ";
    }
    cout << endl;
}
