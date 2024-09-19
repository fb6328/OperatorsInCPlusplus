#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double inductance, capacitance, frequency; // Correct variable 1 mark
    const double M_PI = 3.142;

    cout << "Enter the inductance (L) in henries: "; // Correct user input 1 mark
    cin >> inductance;
    cout << "Enter the capacitance (C) in farads: ";
    cin >> capacitance;

    frequency = 1 / (2 * M_PI * sqrt(inductance * capacitance)); // Correct formula representation 2 marks

    cout << "The resonant frequency of the RLC circuit is: " << frequency << " Hz" << endl;

    return 0;
}
