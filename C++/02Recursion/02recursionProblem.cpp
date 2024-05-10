// Basic Recursion Problems
#include <bits/stdc++.h>
using namespace std;

// Print name 5 times
void printName(string s, int i)
{
    if (i > 5)
    {
        return;
    }
    cout << s << "\n";
    printName(s, i + 1);
}

// Print linearly from 1 to n.
void printLinear(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    printLinear(i + 1, n);
}

// Print linearly from n to 1.
void printReverse(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n << " ";
    printReverse(n - 1);
}

// Print from 1 to N (with Backtracking)
void printLinearBacktracking(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    printLinearBacktracking(i - 1, n);
    cout << i << " ";
}

// Print from N to 1 (with Backtracking)
void printReverseBacktracking(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    printReverseBacktracking(i - 1, n);
}

int main()
{
    cout << "Program to print your name 5 times.\n";
    string s;
    cout << "Enter your name.\n";
    cin >> s;
    cout << "Printing name 5 times.\n";
    printName(s, 1);

    // ****************************************** //
    cout << "Program to print linearly from 1 to N.\n";
    int n;
    cout << "Enter the number.\n";
    cin >> n;
    printLinear(1, n);
    cout << "\n";

    // ****************************************** //
    cout << "Program to print linearly from N to 1.\n";
    int n1;
    cout << "Enter the number.\n";
    cin >> n1;
    printReverse(n1);
    cout << "\n";

    // ****************************************** //
    cout << "Program to print linearly from 1 to N with backtracking.\n";
    int n2;
    cout << "Enter the number.\n";
    cin >> n2;
    printLinearBacktracking(n2, n2);
    cout << "\n";

    // ****************************************** //
    cout << "Program to print linearly from N to 1 with backtracking.\n";
    int n3;
    cout << "Enter the number.\n";
    cin >> n3;
    printReverseBacktracking(n3, n3);
    cout << "\n";
    return 0;
}