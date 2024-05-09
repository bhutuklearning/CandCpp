// Solving Fibonacci with loops as well as recursion
#include <bits/stdc++.h>
using namespace std;

// Fibonacci numbers using recursion
int fibo(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    // Fibonacci Numbers using loops
    int n1;
    cout << "Enter the number.\n";
    cin >> n1;
    int a = 1, b = 1, c;

    if (n1 == 0)
    {
        cout << 0 << "\n";
    }
    else if (n1 == 1 || n1 == 2)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << "0 1 1" << " ";

        for (int i = 2; i < n1; i++)
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
        cout << "\n";
    }

    // Fibonacci numbers using recursion
    int n2;
    cout << "Enter the numnber for finding out the fibonacci value using recursion.\n";
    cin >> n2;
    int res_fibo = fibo(n2);
    cout << res_fibo << "\n";
    return 0;
}

// Time Complexity of fibonacci numbers using loops is O(n);
// Time Complexity of fibonacci numbers using recursion is O(2^n)