/*Create an array, nums, that stores 5 integers which are input by the user.
Hint use for loop to insert values into the array.
Use foreach loop to access values from the array */

#include <iostream>
using namespace std;

int main()
{
    // Declare array nums
    int nums[10], sum = 0;
    long int product = 1;
    double average;
    // Prompt user to enter 5 integers
    cout << "Enter 10 integers: ";

    // Store the values into the array at subsequent index from index 0
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter element " << i + 1 << endl;
        cin >> nums[i];
        sum = sum + nums[i];
        product = product * nums[i];
    }

    // Access all values and output them on the screen using foreach loop
    cout << "You entered the following elements\n";
    int index = 0;
    for (int i : nums)
    {
        cout << "Element at index " << index << " = " << i << endl;
        index++;
    }
    cout << "Sum of the elements =" << sum << endl; // Print sum of the element on screen
    cout << "Average of the elements = " << sum / (sizeof(nums) / 4) << endl;
    cout << "A multiplication of all the elements =" << product << endl;
    cout << "Value out of the array size =" << nums[10] << endl;
    cout << "Memory size occupied by array nums[10] =" << sizeof(nums) << endl;
}
