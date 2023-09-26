#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const double pi = 3.14;
    double area, radius;
    cout << "this program calculates the area of circle.\n";
    cout << "what is the radius of the circle ?";
    cin >> radius;
    area = radius * pow(radius, 2.0);
    cout << "the area is "<< area <<endl;


    return 0;
}