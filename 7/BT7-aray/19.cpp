#include <iostream>
using namespace std;

// Khai báo nguyên mẫu hàm
void doubleArray(int[], int);
void showValues(int[], int);

int main()
{
    const int sizeMang = 7;
    int set[sizeMang] = {1, 2, 3, 4, 5, 6, 7};

    // Hiển thị các giá trị ban đầu.
    cout << "cac gia tri cua mang:\n";
    showValues(set, sizeMang);

    // Nhân đôi các giá trị trong mảng.
    doubleArray(set, sizeMang);

    // Hiển thị các giá trị sau khi gọi hàm doubleArray.
    cout << "sau khi goi ham doubleArray, cac gia tri la:\n";
    showValues(set, sizeMang);

    return 0;
}

// Định nghĩa hàm doubleArray
void doubleArray(int mang[], int kichThuoc)
{
    for (int index = 0; index < kichThuoc; index++)
    {
        mang[index] *= 2;
    }
}

// Định nghĩa hàm showValues
void showValues(int mang[], int kichThuoc)
{
    for (int index = 0; index < kichThuoc; index++)
    {
        cout << mang[index] << " ";
    }
    cout << endl;
}
