// Prime numbers
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Program to find which number is prime or composite.\n";
    int num, count = 0;
    cout << "Enter the number.\n";
    cin >> num;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if ((num / i) != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << num << " is a prime number.\n";
    }
    else if (count > 2)
    {
        cout << num << " is a composite number.\n";
    }
    return 0;
}