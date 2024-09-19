#include <iostream>
#include <string>
using namespace std;

bool isValidEmail(const string &email) // Valid function 1 marks
{
    // Variable declarion  1 mark
    bool atSymbol = false;
    bool dotSymbol = false;

    for (char ch : email) // Correct foreach loop 2 marks
    {
        switch (ch) // Correct switch...case structure 2 marks
        {
        case '@':
            atSymbol = true;
            break;
        case '.':
            dotSymbol = true;
            break;
        }
    }

    return atSymbol && dotSymbol;
}

int main()
{
    string email, message; // 1 mark for variable declaration, user prompt and input
    cout << "Enter your email address: ";
    cin >> email;
    message = isValidEmail(email) ? "The email address is valid." : "The email address is invalid."; // 2 marks
    cout << message << endl;
    return 0;
}
