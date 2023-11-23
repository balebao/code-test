//***************************************************
// The displayValues function uses a pointer to *
// parameter to display the contents of an array. *
//***************************************************
void displayValues(const int *numbers, int size)
{
// Display all the values.h
for (int count = 0; count < size; count++)
{
cout << *(numbers + count) << " ";
}
cout << endl;
}