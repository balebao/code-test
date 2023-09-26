#include <iostream>
using namespace std;
int main (){
   //Constants for minimum income and years
   const double MinIncome= 35000.0;
   const int MinYear = 5;
   double income; // Annual income
   int years; // Years at the current job
 // Get the annual income
   cout << "What is your annual income? ";
   cin >> income;
 //  Get the number of years at the current job.
    cout << "How many years have you worked at "
     << "your current job? ";
     cin >> years;
   // Determine the user's loan qualifications.
 if (!(income >= MinIncome|| years > MinYear))
    {
 cout << "You must earn at least $" 
  << MinIncome<< " or have been  "
    << "employed more than " << MinYear
   << " years.\n";      
} 
    else
    cout << "You qualify.\n";
    return 0; }