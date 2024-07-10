#include <iostream>
using namespace std;

int main()
{
    int option;
    cout << "Hi. This is your BBIT Sem 1 Timetable (May-Aug 2024)";
    cout << "\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday" << endl;
    cout << "Please select day of choice (e.g. 1, 2, 3, etc...)" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Monday Classes\n...................." << endl;
        cout << "8.00am - 9.00am: BBIT 1106 Introduction to Programming1" << endl;
        cout << "9.00am - 10.00am: BBIT 1106 Introduction to Programming1" << endl;
        cout << "10.00am - 11.00am: BBIT 1106 Introduction to Programming1" << endl;
        break;
    case 2:
        cout << "Tuesday Classes\n...................." << endl;
        cout << "8.00am - 9.00am: BBIT 1102 Introduction to Ethics" << endl;
        cout << "9.00am - 10.00am: BBIT 1102 Introduction to Business" << endl;
        cout << "10.00am - 11.00am: Introduction to Programming2" << endl;
        break;
    case 3:
        cout << "Wednesday Classes\n...................." << endl;
        cout << "8.00am - 9.00am: Introduction to Programming3" << endl;
        cout << "9.00am - 10.00am: Introduction to Programming3" << endl;
        cout << "10.00am - 11.00am: Introduction to Programming3" << endl;
        break;
    case 4:
        cout << "Thursday Classes\n...................." << endl;
        cout << "8.00am - 9.00am: Introduction to Programming4" << endl;
        cout << "9.00am - 10.00am: Introduction to Programming4" << endl;
        cout << "10.00am - 11.00am: Introduction to Programming4" << endl;
        break;
    case 5:
        cout << "Friday Classes\n...................." << endl;
        cout << "8.00am - 9.00am: Introduction to Programming5" << endl;
        cout << "9.00am - 10.00am: Introduction to Programming5" << endl;
        cout << "10.00am - 11.00am: Introduction to Programming5" << endl;
        break;
    default:
        cout << "Invalid Input. Please try again." << endl;
    }
    return 0;
}