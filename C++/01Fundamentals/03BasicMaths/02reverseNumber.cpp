// Reverse a number
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Program to find the reverse of the number.\n";
    int num, reverse_num = 0, lastdigit;
    cout << "Enter the number.\n";
    cin >> num;
    while (num > 0)
    {
        lastdigit = num % 10;
        reverse_num = (reverse_num * 10) + lastdigit;
        num = num / 10;
    }
    cout << "Reverse of the number is: " << reverse_num << "\n";
    return 0;
}