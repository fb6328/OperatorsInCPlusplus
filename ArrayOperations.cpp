#include <iostream>

using namespace std;

int main() {
    // Static array initialization
    int arr[5] = {1, 2, 3, 4, 5};

    // Dynamic array initialization
    int n = 5;
    int* dynamicArr = new int[n];
    for (int i = 0; i < n; ++i) {
        dynamicArr[i] = i + 1;
    }

    // Accessing and modifying elements
    cout << "Original elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[2] = 10; // Modify the third element
    cout << "Modified elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Iterating through elements
    cout << "Dynamic array elements: ";
    for (int i = 0; i < n; ++i) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;

    // Finding the size of a static array
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of static array: " << arrSize << endl;

    // Deallocating dynamic memory
    delete[] dynamicArr;

    return 0;
}
