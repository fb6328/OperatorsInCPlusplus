/*Create an array, nums, that stores 5 integers which are input by the user. */

#include <iostream>
using namespace std;

int main()
{
    // Declare array nums
    int nums[10];
    // Prompt user to enter 5 integers
    cout << "Enter 10 integers: ";

    // Store the values into the array at subsequent index from index 0
    cin >> nums[0];
    cin >> nums[1];
    cin >> nums[2];
    cin >> nums[3];
    cin >> nums[4];
    cin >> nums[5];
    cin >> nums[6];
    cin >> nums[7];
    cin >> nums[8];
    cin >> nums[9];

    // Print the array nums values/elements on the screen
    cout << "The array nums values are: " << endl;
    cout << "First element =" << nums[0] << endl;
    cout << "Second element =" << nums[1] << endl;
    cout << "Third element =" << nums[2] << endl;
    cout << "Fourth element =" << nums[3] << endl;
    cout << "Fifth element =" << nums[4] << endl;
    cout << "Sixth element =" << nums[5] << endl;
    cout << "Seventh element =" << nums[6] << endl;
    cout << "Eighth element =" << nums[7] << endl;
    cout << "Ninth element =" << nums[8] << endl;
    cout << "Tenth element =" << nums[9] << endl;
}