#include <iostream>
 using namespace std;

 int main(){
    const int cacThang = 12;
    int soNgay[cacThang] = {31 , 29 , 31 , 30 ,
                    31 , 30 , 31 , 31 ,
                    30 , 31 , 30 , 31};

    for (int count = 0; count  < 12 ; count++ )
    {
        cout <<" \nso ngay cua thang " << count + 1 << " la: "
        << soNgay[count];
    }
    return 0;
 }
