
#include <iostream>
using namespace std;

//Calculate a student Avarge
int main()
{
    int a[9]; //marks array
    int sum = 0; //sum of all marks to find the avarge
    int avg;
    
    cout << "Enter your marks (9 Subjects): " << endl; //display message to the user
    for(int i = 0; i < 9; i++) // enter the marks in a loop
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    
    avg = sum / 9; //Calculate the avarge
    
    cout << "The Avarge is: " << avg << endl; //display the avarge to the user

    return 0; //the end
}