#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable declarations
    string food;
    char response; // Control variable
    cout << "What is your favorite food?\n";
    cin >> food;
    cout << "Do you wish to continue? Enter Y/N\n";
    cin >> response;
    if (response == 'Y' || response == 'N' || response == 'y' || response == 'n')
    {
        do
        {
            cout << "What is your favorite food?\n";
            cin >> food;
            cout << "Do you wish to continue? Enter Y/N\n";
            cin >> response;
        } while (response != 'N');
        cout << "You entered 'N' so end of while loop. Bye!\n";
    }
    else
    {
        cout << "Invalid input\n";
    }
}