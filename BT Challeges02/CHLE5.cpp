#include <iostream>
using namespace std;
int main(){
    
    //các biến đơn vị đo lượng 
    float qualitiStone,
          qualitiPound, 
          kg = 64.5,
          stone = 6.35,
          onePound;
        
   //1 stone = 14 pound tính 1 pound
   onePound = 14 / 6.5;

   //trọng lượng theo đơn vị đá 
   qualitiStone = kg / stone;

   //trọng lượng theo đơn vị pound
   qualitiPound = kg / onePound;

   //kết qua hiển thị
   cout << "qualiti accoding to  pound is  " << qualitiPound << " pound\n";
   cout << "qualiti accoding to stone is  "  << qualitiStone << " Stone\n";
   cout << "qualiti accoding to kg is   "  << kg << "kg" << endl;


   return 0;

}