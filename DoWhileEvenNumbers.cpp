#include <iostream>
using namespace std;

int main()
{
    int number = 12;
    do
    {
        cout << number << ",";
        number += 2;
        // number = number + 2;
    } while (number <= 50);
}