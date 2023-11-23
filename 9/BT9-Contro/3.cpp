#include <iostream>
using namespace std;
void getNumber(int*);
void doubleValue(int*);
int main(){
    int number;
  
 getNumber(&number);
 doubleValue(&number);


 cout << number << endl;

}
void getNumber(int* val) {

    cout << "enter an integer number :";
    cin >> *val;
   // *val *=2;
}
void doubleValue(int *val) {
    *val *=2;
} 
