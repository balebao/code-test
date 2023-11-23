#include <iostream>
using namespace std;
int main (){
  double length1, width1;
  double length2, width2;

  cout << " enter length and width of rectangle number 1:\n";
  cin >> length1 >> width1;
  cout << " enter length and width of rectangle number 2:\n";
  cin >> length2 >> width2;

  double acreager1 = (length1 * width1);
  double acreager2 = (length2 * width2);

  if (acreager1 > acreager2){
  cout << "rectangle number 1 lager than rectangle number 2\n" << endl;
  }
  else { if (acreager1 < acreager2){
  cout << "rectangle number 2 lager than rectangle number 1\n" << endl;
  }
  else {
  cout << " 2 rectangle have equal area " << endl;
}} 
    return 0;
}