#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize a string variable
    string stringText = "String";
    for (char ch : stringText)
    {
        cout << ch << ",";
    }
    cout << endl;
    return 0;
}
