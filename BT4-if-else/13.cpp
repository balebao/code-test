#include <iostream>
using namespace std;
int main(){
// Constants for grade thresholds
const int A = 90,
 B = 80,    
 C = 70,
 D = 60;
 int testScore; // To hold a numeric test score
 // Get the numeric test score.
 cout << "Enter your numeric test score and I will\n";
 cout << "tell you the letter grade you earned: ";
 cin >> testScore;

 // Determine the letter grade.
 if (testScore >= A){
 cout << "Your grade is A.\n";
 }
 else
 {
 if (testScore >= B) {
 cout << "Your grade is B.\n";
 }
 else
 {
 if (testScore >= C){
 cout << "Your grade is C.\n";
 }
 else
 {
 if (testScore >= D){
 cout << "Your grade is D.\n";
 }
 else
 {
 cout << "Your grade is F.\n";
 }}}} return 0;
 }