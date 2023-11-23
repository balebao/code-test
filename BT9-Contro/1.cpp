#include <iostream>
using namespace std;
int main(){
  int x = 25;
  cout << "The address of x is " << &x << endl;            //địa chỉ
  cout << "The size of x is " << sizeof(x) << " bytes\n";  //kích thước
  cout << "The value in x is " << x << endl;               //giá trị
}

// có dấu * là in ra giá trị kh cos sao in ra địa chỉ