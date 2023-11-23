#include <iostream>
using namespace std;
int main(){

    //hằng số
    const double PI = 3.1459;
    const double DIAMETER = 10.0;


   //biến để giữ chu vi
    double circumference;

   //tính biến giữ chu vi 
    circumference = PI * DIAMETER;

   //kết quả tính hiển thị
    cout << "the cricumference is " << circumference << endl;

    return 0;
}