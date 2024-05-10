#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    cout << "Program to find the fibonacci value of the number given.\n";
    int n;
    cout << "Enter the number.\n";
    cin >> n;
    cout << fibo(n) << "\n";
    fibo1(n);
    return 0;
}