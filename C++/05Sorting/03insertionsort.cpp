// Insertion Sort
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int arr[N];

int main()
{
    int n;
    cout << "Enter the size of the array.\n";
    cin >> n;
    cout << "Enter the elements of the array.\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            swap(arr[j], arr[j - 1]);
        }
    }

    // Another Insertion Sort Code
    /*
    for(int i=0; i<n; i++) {
        int j=i;
        while(j>0 && arr[j-1] >= arr[j]) {
            swap(arr[j-1], swap[j]);
            j--;
        }
    }
    */
    cout << "Sorted Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time Complexity of Insertion Sort
// Worst Case: O(n^2)
// Best Case: O(n) -> When the entire elements of the array is in ascending order