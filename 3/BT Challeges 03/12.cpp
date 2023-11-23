#include <iostream>
using namespace std;
int main (){
   double doF,doC;
   cout << " nhap nhiet do celsius ";
   cin >> doC;
   doF = 9/5 * doC + 32.0;
   cout << " nhiet do fahrenheit doi duoc la " << doF <<"F" <<endl;

    return 0;
}