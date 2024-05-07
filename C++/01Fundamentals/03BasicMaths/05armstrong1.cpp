// Armstrong number
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, countDigits = 0, armstrong = 0, lastdigit;
    cin >> num;
    int copy_num = num;
    while (num > 0)
    {
        countDigits++;
        num = num / 10;
    }
    num = copy_num;
    for (int i = 1; i <= countDigits; i++)
    {
        lastdigit = num % 10;
        armstrong = armstrong + abs(pow(lastdigit, countDigits));
        num = num / 10;
    }
    cout << "Calculated Value: " << armstrong << "\n";
    num = copy_num;
    if (num == armstrong)
    {
        cout << num << " is a armstrong number.\n";
    }
    else
    {
        cout << num << " is not an armstrong number.\n";
    }
    return 0;
}