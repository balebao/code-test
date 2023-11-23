#include <iostream>
using namespace std;
int main (){
  {  short  numeber[]= {10 ,20 ,30 ,40 ,50};
    cout << " the firt element of the array is ";
    cout << *numeber << endl;
}
{
    const int size = 5;
    int numbers[size];
    int count;
     cout << "enter "<< size << " numeber \n";
     for (count = 0; count < size ; count++ )
     cin >> *(numbers + count);
    

    cout << " here are the number you entered : \n";
    for (count = 0; count < size ; count++)
    cout << *(numbers + count)<< "  ";
    cout << endl;
}
}