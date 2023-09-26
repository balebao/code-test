#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int number;
    cout << "enter an integer and i will tell you if it \n";
    cout << "is odd or even\n";
    cin >> number;

 if(number % 2 == 0)
    cout << number << " is even\n";
 else 
 cout << number <<"  is odd\n";
 return 0;
}