// Edited directly on GitHub
// Jack_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Feature by Fergiandane: a function to determine if a student has passed or failed based on their grade.//
void passFailCheck(int score) 
{
    if (score >= 60) {
        cout << "Congratulations! You passed!" << endl;
    } else {
        cout << "Sorry, you failed. Better luck next time!" << endl;
    }
}
using namespace std;
// Feature by Jack: This function calculates the average grade and assigns a letter grade based on the average. //
void calculateGrade(int score) 
{
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
}

// My favourite number function — added by [Your Name]
void myFavouriteNumber()
{
    int fav = 5;
    cout << "My favourite number is: " << fav << endl;
}
int main()
{
	myFavouriteNumber();

    cout << "Hello from Jack! This is my first Git commit!" << endl;
    cout << "Git makes collaboration easy!" << endl;
    cout << "Changes made by Fergiandane!" << endl;
    cout << "Lab 1 completed on April 8th 2026!" << endl;
    cout << "Feature by Jack: Branching is awesome!" << endl;
    cout << "Student ID: 470502 | Name: Jack" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file