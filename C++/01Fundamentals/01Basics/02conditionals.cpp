#include <bits/stdc++.h>

using namespace std;

// Conditionals statements:-> If-else and switch case

int main()
{
    // If-Else
    int binary;
    cout << "Enter binary number either 0 or 1.\n";
    cin >> binary;
    if (binary != 1 && binary != 0)
    {
        cout << "Please enter correct input which is either 0 or 1.\n";
        cin >> binary;
    }
    binary ? cout << "If statement gets executed because of 1.\n" : cout << "Else statement gets executed because of 0.\n";

    // Write a program to find a person is adult or not.
    cout << "Program to find if a person is adult or not.\n";
    int age_adult;
    cout << "Enter the age.\n";
    cin >> age_adult;

    if (age_adult >= 18)
    {
        cout << "The person is adult.\n";
    }
    else
    {
        cout << "The person is minor or not adult.\n";
    }

    // Write a program for finding grades of the student based on the marks.
    cout << "Program to find the grade of the student based on the marks.\n";
    int marks_grade;
    cout << "Enter the marks.\n";
    cin >> marks_grade;
    if (marks_grade >= 80 && marks_grade <= 100)
        cout << "Grade A\n";
    else if (marks_grade >= 60 && marks_grade < 80)
        cout << "Grade B\n";
    else if (marks_grade >= 50 && marks_grade < 60)
        cout << "Grade C\n";
    else if (marks_grade >= 45 && marks_grade < 50)
        cout << "Grade D\n";
    else if (marks_grade >= 25 && marks_grade < 45)
        cout << "Grade E\n";
    else if (marks_grade < 25)
        cout << "Grade F\n";

    // Take the age from the user and then decide accordingly
    /*
    1. If age < 18
    print - "not eligible for job."
    2. If age >= 18
    print - "eligible for job"
    3. If age >= 55 && age <= 57
    print - "eligible for job, but retirement soon."
    4. If age > 57
    print - "retirement time."
    */
    int age_job;
    cout << "Enter the age for job eligibility.\n";
    cin >> age_job;

    if (age_job < 18)
    {
        cout << "Not eligible for job.\n";
    }
    else if (age_job >= 18 && age_job <= 54)
    {
        cout << "Eligible for job.\n";
    }
    else if (age_job >= 55 && age_job <= 57)
    {
        cout << "ELigible for job, but retirement soon.\n";
    }
    else if (age_job > 57)
    {
        cout << "Time for retirement.\n";
    }

    // Switch Case
    /*
    Take the day number from the user and print the corresponding day
    1:- print Monday.
    2:- print Tuesday
    */
    int day_number;
    cout << "Enter the day number to know the day.\n";
    cin >> day_number;
    switch (day_number)
    {
    case 1:
        cout << "Monday.\n";
        break;
    case 2:
        cout << "Tuesday.\n";
        break;
    case 3:
        cout << "Wednesday.\n";
        break;
    case 4:
        cout << "Thursday.\n";
        break;
    case 5:
        cout << "Friday.\n";
        break;
    case 6:
        cout << "Saturday.\n";
        break;
    case 7:
        cout << "Sunday.\n";
        break;

    default:
        cout << "Wrong Input.\n";
        break;
    }

    return 0;
}