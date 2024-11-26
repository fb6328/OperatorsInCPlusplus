#include <iostream>
using namespace std;

int main()
{
    int costPrice, sellingPrice, profit;

    cout << "Enter the cost price of the vehicle";
    cin >> costPrice;
    cout << "Enter the selling price of the vehicle";
    cin >> sellingPrice;

    profit = sellingPrice - costPrice;

    cout << "The profit made from the sale of the vehicle is " << profit << endl;
    return 0;
}
