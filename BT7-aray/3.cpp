#include <iostream>
#include <fstream>
using namespace std;
int main()
{
const int sizeMang = 10; // kích thước mảng 
int sttMang[sizeMang]; // 10 stt của mang
 int count = 0; // biến vòng lặp
 ifstream inputFile; // đối tượng luông tệp đầu vào

//  mở file
 inputFile.open("10sttMang.txt");

//đọc số từ tệp vào mảng 
 while (count < sizeMang && inputFile >> sttMang[count])
 count++;

 //đóng tệp 
 inputFile.close();

 //hien thị
 cout << " stt Mang la: ";
 for (count = 0; count < sizeMang; count++)
 cout << sttMang[count] << " ";
 cout << endl;
 return 0;
 }