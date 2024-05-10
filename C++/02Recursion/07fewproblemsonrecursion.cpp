#include <bits/stdc++.h>
using namespace std;

// Sum of an array
int sumofArray(int i, int arr[], int length, int sum)
{
    if (i >= length)
    {
        return sum;
    }
    sum = sum + arr[i];
    sumofArray(i + 1, arr, length, sum);
}
// Tc of the above program is: O(n)

// Sum of Array suggested by LUV
int sumofArr(int n, int ar[])
{
    if (n < 0)
    {
        return 0;
    }
    return sumofArr(n - 1, ar) + ar[n];
}

// Sum of Digits of a Number
int sumofDigits(int n, int sum)
{
    if (n <= 0)
    {
        return sum;
    }
    sum = sum + n % 10;
    return sumofDigits(n / 10, sum);
}
// TC of the above program is O(log10N) or log of N to base 10

// Sum of Digits of a number suggested by Luv
int digitSum(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return digitSum(n / 10) + n % 10;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << sumofArray(0, arr, length, 0) << endl;
    cout << sumofArr(length - 1, arr) << endl;
    cout << digitSum(155) << endl;
    int n;
    cout << "Enter the number.\n";
    cin >> n;
    cout << sumofDigits(n, 0) << endl;
    return 0;
}