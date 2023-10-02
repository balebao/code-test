#include <iostream>
using namespace std;

// Khai báo nguyên mẫu hàm
void hienThiGiaTri(int);

int main()
{
    const int size = 8;
    int numbers[size] = {5, 10, 15, 20, 25, 30, 35, 40};

    for (int index = 0; index < size; index++)
    {
        hienThiGiaTri(numbers[index]);
    }
    
    return 0;
}

// Định nghĩa hàm hienThiGiaTri
void hienThiGiaTri(int num)
{
    cout << num << " ";
}
