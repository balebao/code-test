#include <iostream>
using namespace std;
int main(){
    
    int area, length, width;

    cout << " this program calculates the area a ";
    cout << " rectangle.\n";
    cout << " enter the length and the width of the rectangle";
    cout << " saperated by space.\n";
    cin >> length >> width;
    area = length * width;
    cout << " the area of the rectangle is "<< area << endl;

    return 0;
} 