#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Create and initialize an array container
    int arrayNumbers[] = {1, 2, 3, 4, 5};

    // foreach loop to iterate over the array
    for (int value : arrayNumbers)
    {
        cout << value << ",";
    }
    cout << endl;
    return 0;
}
