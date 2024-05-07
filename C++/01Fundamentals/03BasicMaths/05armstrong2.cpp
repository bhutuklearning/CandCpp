// Armstrong number
#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "Armstrong numbers between 1 and 1000 are: \n";

    for (int num = 1; num <= 1000; num++)
    {
        int countDigits = 0, armstrong = 0, lastdigit = 0;

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

        num = copy_num;
        if (num == armstrong)
        {
            cout << num << " ";
        }
    }

    return 0;
}