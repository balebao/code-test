#include <iostream>
#include <cmath>
using namespace std;
int main (){
  double weight,mass;
  cout << " enter the mass(kg) and i will calculate the weight:\n ";
  cin >> mass;
  weight = mass * 9.8;
    if (weight < 10){
    cout << "weight is too light" << endl;
    } 
    else if (weight > 1000){
        cout << " weight is too heavy" << endl;
    }
    else {
        cout << "weight within allowable range" << endl;
    }
    return 0;
}