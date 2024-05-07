// GCD or HCF and LCM
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Program to find gcd as well as lcm.\n";
    int num1, num2, gcd, lcm;
    cout << "Enter the two numbers.\n";
    cin >> num1 >> num2;

    for (int i = min(num1, num2); i > 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << "GCD is: " << gcd << "\n";
    // LCM program
    for (int i = 1; i < num1 * num2; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }
    cout << "LCM is: " << lcm << "\n";

    cout << "Program to find gcd and lcm of numbers using library functions.\n";
    int num3, num4;
    cout << "Enter the two numbers.\n";
    cin >> num3 >> num4;
    int res = __gcd(num3, num4);
    int new_lcm = (num3 * num4) / res;
    cout << "GCD is: " << res << "\n";
    cout << "LCM is: " << new_lcm << "\n";
    return 0;
}