// Sum of all divisors of a number between 1 to n.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Program to write the sum of all divisors between 1 and the number.\n";
    int n, sum = 0;
    cout << "Enter the number.\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
    }
    cout << "Sum of all the divisors: " << sum << "\n";
    return 0;
}