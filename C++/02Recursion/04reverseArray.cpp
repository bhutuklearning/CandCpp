#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int arr[N];

void reverseArray(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray(arr, i + 1, n);
}

int main()
{
    int n;
    cout << "Enter the size of the array.\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array.\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    reverseArray(arr, 0, n);
    cout << "Reversed Array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}