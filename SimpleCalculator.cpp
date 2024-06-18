#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fName, mName, lName, fullName;
    int num1, num2;

    cout << "....SIMPLE C++ CALCULATOR...." << endl;
    cout << "Enter first name: ";
    cin >> fName;
    cout << "Enter middle name: ";
    cin >> mName;
    cout << "Enter last name: ";
    cin >> lName;

    cout << "Welcome to " << fName << " " << mName << " " << lName << "'s Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "COMPARISON OPERATORS\n";
    // Comparison greater than opertator >
    bool result;
    result = (num1 > num2);
    cout << "Is " << num1 << " > " << num2 << " = " << result << endl;
    // Comparison less than opertator <
    result = (num1 < num2);
    cout << "Is " << num1 << " < " << num2 << " = " << result << endl;
    // Comparison equal to opertator ==
    result = (num1 == num2);
    cout << "Is " << num1 << " == " << num2 << " = " << result << endl;
    // Comparison greater than or equal to opertator >=
    result = (num1 >= num2);
    cout << "Is " << num1 << " >= " << num2 << " = " << result << endl;
    // Comparison less than or equal to opertator <=
    result = (num1 <= num2);
    cout << "Is " << num1 << " <= " << num2 << " = " << result << endl;
    cout << "LOGICAL OPERTATORS\n";
    // Logical AND opertator &&
    result = (num1 < num2) && (num1 > num2);
    cout << (num1 < num2) << " AND " << (num1 > num2) << " = " << result << endl; // True AND True = True
    //  Logical OR opertator ||
    result = (num1 < num2) || (num1 > num2);
    cout << (num1 < num2) << " OR " << (num1 > num2) << " = " << result << endl; // True OR True = True
    //  Logical NOT opertator !
    result = (num1 != num2);
    cout << num1 << " != " << num2 << " = " << result << endl; // True OR True = True
    cout << "ARITHMETIC OPERATORS\n";
    // Addition Operator +
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    // Substraction Operator -
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    // Multiplication Operator *
    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
    // Division Operator /
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    // Modulo Operator %
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    cout << "INCREMENT/DECEREMENT OPERATORS\n";
    // Increment by one opertator ++
    cout << " ++ = " << num1 << ++num1 << endl;
    // Decrement by one opertator --
    cout << " -- = " << num1 << --num1 << endl;

    return 0;
}