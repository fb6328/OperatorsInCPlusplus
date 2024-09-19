#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int ten[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i = 0; i < n; ++i) {
        sum += ten[i];
    }
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}
