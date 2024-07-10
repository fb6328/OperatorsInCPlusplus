#include <iostream>
using namespace std;

int main()
{
    // Declare necessary variables
    int age;
    string message;

    // Prompt user for input
    cout << "Enter age of child: ";
    cin >> age;

    // Simple if statement to check if the child's age is greater
    // than or equal to 4
    if (age >= 4)
    {
        // If the child's age is greater than or equal to 4,
        // print the message "Admit to school."
        cout << "Admit to school." << endl;
    }
    else
    {
        // If the child's age is less than 4, print the message
        // "Decline! Minimum age not reached."
        cout << "Decline! Minimum age not reached." << endl;
    }

    // Rewrite the if...else statement above using ternary operator
    message = (age >= 4) ? "Admit to school." : "Decline! Minimum age not reached."; // Ternary operator
    cout << message << endl;

    return 0;
}