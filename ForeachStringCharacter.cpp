#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize a string variable
    string stringText;
    cout << "Enter a text to split\n";
    getline(cin, stringText);

    /* foreach loop to iterate over the string and split the string into
    individual characters*/
    for (char ch : stringText)
    {
        cout << ch << ",";
    }
    cout << endl;
    return 0;
}
