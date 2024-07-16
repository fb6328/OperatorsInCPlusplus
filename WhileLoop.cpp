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
        while (response != 'N')
        {
            cout << "What is your favorite food?\n";
            cin >> food;
            cout << "Do you wish to continue? Enter Y/N\n";
            cin >> response;
        }
    }
    else
    {
        cout << "Invalid input\n";
    }
}