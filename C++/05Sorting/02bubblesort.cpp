// Bubble Sort
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int arr[N];

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
    // Bubble Sort Program.
    for (int i = n - 1; i >= 1; i--)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    cout << "Sorted Array.\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time Complexity of Bubble Sort
// Worst Case: O(n^2)
// Best Case: O(n) -> When the entire elements of the array is in ascending order