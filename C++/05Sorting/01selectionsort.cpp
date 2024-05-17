// Selection Sort
#include <bits/stdc++.h>
using namespace std;

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
    cout << "Original Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    // Selection sort program
    for (int i = 0; i < n; i++)
    {
        int minElement = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] <= arr[minElement])
            {
                minElement = j;
            }
        }
        // Library function: swap
        // swap(arr[i], arr[minElement]);
        int temp = arr[i];
        arr[i] = arr[minElement];
        arr[minElement] = temp;
    }
    cout << "Sorted Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time Complexity of Selection Sort
// Worst Case: O(n^2)
// Best Case: O(n^2)