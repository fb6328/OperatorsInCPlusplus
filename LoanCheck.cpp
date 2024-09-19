#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    double bank_balance;
    string CRB_status;
    int duration_in_months;

    // Input data from the user
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> bank_balance;
    cout << "Enter your CRB status (Good/Bad): ";
    cin >> CRB_status;
    cout << "Enter the duration as a customer (in months): ";
    cin >> duration_in_months;

    // Check if the user is qualified for the loan
    if (age > 22)
    {
        if (bank_balance >= 50000)
        {
            if (CRB_status == "Good")
            {
                if (duration_in_months > 6)
                {
                    cout << "Loan Approved" << endl;
                }
                else
                {
                    cout << "Loan Denied" << endl;
                }
            }
            else
            {
                cout << "Loan Denied" << endl;
            }
        }
        else
        {
            cout << "Loan Denied" << endl;
        }
    }
    else
    {
        cout << "Loan Denied" << endl;
    }

    return 0;
}
