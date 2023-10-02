#include <iostream>
using namespace std;

// Khai báo nguyên mẫu hàm
void hienThiGiaTri(int[], int);

int main()
{
    const int sizeMang1 = 8; // Kích thước của mảng set1
    const int sizeMang2 = 5; // Kích thước của mảng set2
    int set1[sizeMang1] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[sizeMang2] = {2, 4, 6, 8, 10};

    // Truyền mảng set1 vào hàm hienThiGiaTri.
    hienThiGiaTri(set1, sizeMang1);

    // Truyền mảng set2 vào hàm hienThiGiaTri.
    hienThiGiaTri(set2, sizeMang2);

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
