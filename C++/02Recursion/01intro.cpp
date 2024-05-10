#include <bits/stdc++.h>
using namespace std;

void fn(int n)
{
    if (n > 5)
    {
        return;
    }
    cout << n << " ";
    fn(n + 1);
}

void fn1(int n)
{
    if (n > 5)
    {
        return;
    }

    fn1(n + 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the number 1.\n";
    cin >> n;
    fn(n);
    cout << "\n";
    fn1(n);
    return 0;
}

// How to calculate the time complexity of Recursions
// 1. Number of function calls
// 2. What is the complexity of each call.