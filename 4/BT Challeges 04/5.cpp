#include <iostream>
#include <cmath>
using namespace std;
int main (){
  double height , weight;
  cout << " enter height - weight and i will calculate BMI index:\n ";
  cin >> height >> weight;

  double BMIIndex = (weight * 703) / pow(height, 2);
    if (BMIIndex < 18){
    cout << "your are underwight" << endl;
    } 
    else if (BMIIndex >= 18 && BMIIndex < 25){
        cout << " you are great body" << endl;
    }
    else {
        cout << " you are overweight" << endl;
    }
    return 0;
}