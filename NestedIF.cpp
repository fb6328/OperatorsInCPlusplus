/*
Create a pre-school admissions program to satisfy the following conditions when admitting children
1. Check the child’s age is between 4 and 10 years
2. If the above criteria is met, proceed to check the interest of the child
3. If the interest of the child is “soccer”, assign to the Soccer Play group,
4. If the interest of the child is “art”, assign to the Art Play Group.
5. If the interest is neither soccer nor art, assign to other groups
6. If the first condition (a) is not met, display an error massage stating that the age input is valid

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare necessary variables
    string childName, interest;
    int age;

    // Prompt user for child name
    cout << "Please enter the child's full name: ";
    getline(cin, childName);
    cout << "Please enter the child's age: ";
    cin >> age;

    if (age >= 4 && age <= 10)
    {
        cout << "Please enter the child's interest: ";
        cin >> interest;
        if (interest == "soccer") // First nested IF
        {
            cout << childName << " has been Admitted and assigned to the Soccer Play group." << endl;
        }
        else if (interest == "art") // Second nested IF
        {
            cout << childName << " has been Admitted and assigned to the Art Play Group." << endl;
        }
        else
        {
            cout << childName << " has been Admitted and assigned to other groups." << endl;
        }
    }
    else
    {
        cout << "Admission unsuccessful." << childName << "'s age is invalid" << endl;
    }
}