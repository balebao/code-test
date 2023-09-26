#include <iostream>
using namespace std;
int main (){
  double number1, number2;
  cout << " enter 2 number and i will compare\n";
  cin >> number1 >> number2;

   double minNum = (number1 < number2) ? number1 : number2;
    double maxNum = (number1 > number2) ? number1 : number2;

    cout << "Số nhỏ nhất là: " << minNum << endl;
    cout << "Số lớn nhất là: " << maxNum << endl;

    return 0;
}