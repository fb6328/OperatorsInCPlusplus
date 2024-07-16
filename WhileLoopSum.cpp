#include <iostream>
using namespace std;

int main()
{
    int number = 20, sum; // Variable declarations
    while (number <= 25)
    {
        sum = sum + number; // Increment the summation
        number++;           // Increment the number by 1
    }
    cout << "Sum of values from 20 to 25 =" << sum << endl;
}
