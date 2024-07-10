// Program to display Passed if student mark is greaterthan or equal to 50
// and Failed if student mark is less than 50
#include <iostream>
using namespace std;

int main()
{
    // Declare necessary variables
    int mark;
    string message;
    // Prompt for mark
    cout << "Enter your mark: ";
    // Read mark
    cin >> mark;
    // Display result using if...else
    if (mark >= 50)
    {
        cout << "Passed" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }

    // Using ternary operator
    message = (mark >= 50) ? "Passed" : "Failed"; // If mark is greater than or equal to 50, message is Passed, else Failed
    cout << message << endl;
}