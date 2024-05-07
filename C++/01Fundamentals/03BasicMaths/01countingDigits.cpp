// Count Digits
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Program to count the number of digits present in the number.\n";
    int n, count_digits = 0;
    cout << "Enter the number.\n";
    cin >> n;
    int copy_n = n;
    while (n > 0)
    {
        count_digits++;
        n = n / 10;
    }
    cout << "Number of digits present in the number " << copy_n << " are: " << count_digits << "\n";
    //**********************************************************
    cout << "Program to find the number of odd and even digits present in the number.\n";
    int num1, odd_count = 0, even_count = 0;
    cout << "Enter the number.\n";
    cin >> num1;
    int copy_num1 = num1;
    while (num1 > 0)
    {
        int lastdigit;
        lastdigit = num1 % 10;
        if (lastdigit % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        num1 = num1 / 10;
    }
    cout << "Number of odd digits in the number " << copy_num1 << " are: " << odd_count << '\n';
    cout << "Number of even digits in the number " << copy_num1 << " are: " << even_count << "\n";
    return 0;
}