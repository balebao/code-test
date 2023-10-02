#include <iostream>
using namespace std;
int main()
{
const int soKiTu = 10;
 char letters[soKiTu] = {'A', 'B', 'C', 'D', 'E',
 'F', 'G', 'H', 'I', 'J'};

 cout << "Character" << "\t" << "ASCII Code\n";
 cout << "---------" << "\t" << "----------\n";
 for (int count = 0; count < soKiTu; count++)
 {
 cout << letters[count] << "\t\t";
 cout << static_cast<int>(letters[count]) << endl;
 }
 return 0;
 }