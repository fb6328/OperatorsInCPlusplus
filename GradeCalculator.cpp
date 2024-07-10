/*
A simple C++ program to calculate student grade given a score
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Variable declarations
    string name;
    int score;
    char grade;
    cout << "Enter the Student name\n";
    getline(cin, name);
    cout << "Enter the Student score\n";
    cin >> score;

    if (score >= 70)
        grade = 'A';
    else if (score >= 60)
        grade = 'B';
    else if (score >= 50)
        grade = 'C';
    else if (score >= 40)
        grade = 'D';
    else if (score >= 0)
        grade = 'F';
    else
        cout << "Invalid sscore";

    cout << "The student name = " << name << endl;
    cout << " Score = " << score << endl;
    cout << " Grade = " << grade << endl;
}