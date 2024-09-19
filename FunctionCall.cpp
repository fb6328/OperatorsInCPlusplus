#include <iostream>
using namespace std;

int add(int a, int b); // Function declaration

int main()
{
    int result = add(5, 3); // Function call
    cout << "The sum is: " << result << endl;
    return 0;
}

int add(int a, int b)
{ // Function definition
    return a + b;
}
