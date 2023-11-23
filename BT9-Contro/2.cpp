#include <iostream>
using namespace std;
int main(){
  int x = 25;
  int *ptr =nullptr;
  ptr = &x;
 cout << x << endl;
 cout << "the adress of x is "<< ptr << endl;
}