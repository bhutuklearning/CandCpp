#include <bits/stdc++.h>
using namespace std;

const int M = 1e5 + 10;

// sum of first N numbers using parameterised way.
void sumofnumbers(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << "\n";
        return;
    }
    sumofnumbers(i - 1, sum + i);
}

// sum of first N numbers using functional way.
int sumofnumbersA(int i)
{
    if (i < 1)
    {
        return 0;
    }
    return sumofnumbersA(i - 1) + i;
}

// Factorial of N numbers
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return (n * fact(n - 1)) % M;
}

int main()
{
    cout << "Program to find sum of first N numbers using parameterised way.\n";
    int num1;
    cout << "Enter the number.\n";
    cin >> num1;
    sumofnumbers(num1, 0);

    //*********************************************************************//
    cout << "Program to find sum of first N numbers using functional way.\n";
    int num2;
    cout << "Enter the number.\n";
    cin >> num2;
    cout << sumofnumbersA(num2) << "\n";

    //*********************************************************************//
    cout << "Program to find factorial of the number.\n";
    int num3;
    cout << "Enter the number.\n";
    cin >> num3;
    cout << fact(num3) << "\n";

    return 0;
}