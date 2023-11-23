#include <iostream>
using namespace std;

void getNumber(int*);
void doubleValue(int*);

int main() {
 int x = 35 , y = 50, z =75;
 int *ptr = nullptr;

 cout << " here are the value of x , y, z\n";
 cout << x << " " << y << " " << z << " "<< endl;

 ptr = &x;
 *ptr += 100;

 ptr = &y;
 *ptr += 100;

 ptr =&z;
 *ptr += 100;
 
 cout << " oce again here are the value of x , y , z\n";
 cout << x << " " << y << " " << z << " "<< endl;
 return 0;
}