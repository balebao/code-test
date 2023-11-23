#include <iostream>
#include <string>
using namespace std;
int main(){
    string mau1,mau2;

  cout << " chon mau co ban thu nhat (REd, BLUE and YELLOW)\n";
  cin >> mau1;
  cout << " chon mau co ban thu hai (REd, BLUE and YELLOW)\n";
  cin >> mau2;

  if ((mau1 == "red" && mau2 == "blue")||(mau1 == "blue" && mau2 == "red")){
   cout << " ket qua "<< mau1 << "ket hop "<< mau2 << " cho ra purple "<< endl;  
  }else
   if ((mau1 == "blue" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "blue")) { 
   cout << " ket qua "<< mau1 << "ket hop "<< mau2 << " cho ra orange "<< endl;
  }else 
   if ((mau1 == "yellow" && mau2 == "red")||(mau1 == "red" && mau2 == "yellow")){
     cout << " ket qua "<< mau1 << "ket hop "<< mau2 << " cho ra green "<< endl;
  }else 
  if (mau1 == "red" && mau2 == "red") {
     cout << " ket qua "<< mau1 << "ket hop "<< mau2 << " cho ra red "<< endl;
  }else 
  if (mau1 == "blue" && mau2 == "blue") {
  cout << " ket qua "<< mau1 << "ket hop "<< mau2 << " cho ra blue "<< endl;
  }else 
   if (mau1 == "yellow" && mau2 == "yellow") {
     cout << " ket qua "<< mau1 << "ket hop "<< mau2 << " cho ra yellow "<< endl;
  }else {
    cout << "khong co ket qua tu cac mau nay" << endl;
  }
    return 0;
}