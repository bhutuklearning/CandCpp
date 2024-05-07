// Palindrome
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Program to find the palindrome of the number.\n";
    int num, reverseNum = 0, lastdigit;
    cout << "Enter the number.\n";
    cin >> num;
    int cop_num = num;
    while (num > 0)
    {
        lastdigit = num % 10;
        reverseNum = reverseNum * 10 + lastdigit;
        num = num / 10;
    }

    num = cop_num;
    if (num == reverseNum)
    {
        cout << "Yes, the number is a palindrome.\n";
    }
    else
    {
        cout << "No, the number is not a palindrome.\n";
    }
    return 0;
}