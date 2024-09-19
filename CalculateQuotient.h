// Function to ask a user to input two values
// It checks if the divisor is zero, asks user to enter non-zero divisor
// Calculate and display the quotient
#include <iostream>
using namespace std;
void calculateQuotient()
{
    // Declare necessary variables
    float numerator, divisor, quotient;
    // Prompt user for input
    cout << "Enter two values to divide\n";
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the divisor: ";
    cin >> divisor;
    // Check if divisor is zero
    do
    {
        cout << "Error: Divisor cannot be zero.\n";
        cout << "Please enter a non-zero divisor: ";
        cin >> divisor;
    } while (divisor == 0);
    // Calculate quotient
    quotient = numerator / divisor;
    // Display quotient
    cout << numerator << "/" << divisor << " = " << quotient << endl;
}