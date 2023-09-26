#include <iostream>
using namespace std;

int main()
{
    const int MIN_SO = 1; // Số nhỏ nhất
    const int MAX_SO = 10; // Số lớn nhất
    int so = MIN_SO; // số bằng số nhỏ nhất 

    cout << "So So Binh Phuong\n";
    cout << "-------------------------\n";
    
    while (so <= MAX_SO)
    {
        cout << so << "\t\t" << (so * so) << endl;
        so++; // cấp số cộng với bước nhảy 1
    }

    return 0;
}
