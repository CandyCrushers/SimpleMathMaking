#include <iostream>
using namespace std;

// Function to perform various mathematical operations
void math()
{
    int num; 

    cout << "Welcome to math!" << endl;
    cout << "Enter a number :)" << endl;
    cin >> num;

    cout << "Good boy" << endl;
    cout << "You entered: " << num << endl;

    // Adding 5 to the entered number
    cout << "Now I will add 5 to your number" << endl;
    cout << "Your new number is: " << num + 5 << endl;

    // Subtracting 5 from the entered number
    cout << "Now I will subtract 5 from your number" << endl;
    cout << "Your new number is: " << num - 5 << endl;

    // Multiplying the entered number by 5
    cout << "Now I will multiply your number by 5" << endl;
    cout << "Your new number is: " << num * 5 << endl;

    // Dividing the entered number by 5
    cout << "Now I will divide your number by 5" << endl;
    cout << "Your new number is: " << num / 5 << endl;

    // Finding the remainder of the entered number divided by 5
    cout << "Now I will find the remainder of your number divided by 5" << endl;
    cout << "Your new number is: " << num % 5 << endl;

    cout << "Goodbye!" << endl;
}

int main()
{
    // Call the math function
    math();
}