#include <iostream>
using namespace std;
int main (){
    double a = 1.5,
           b = 1.5;
    a += 0.00000000000000000000001;
        if(a == b)
        cout << " both a and b are the same\n";
        else
        cout << " a and b not is the same\n";
        return 0;
}