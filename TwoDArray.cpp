#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize a two dimensional array with 3 rows and 4 columns
    int twoDArray[3][4] = {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12}};

    // Accessing elements in a 2D Array
    cout << "Element in second row, third column =" << twoDArray[1][2];
}