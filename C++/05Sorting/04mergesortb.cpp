// Merge Sort Program
// In this Merge Sort Program array is passed in the function
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int r, int mid)
{
    int lSize = mid - l + 1;
    int rSize = r - mid;
    int L[lSize + 1];
    int R[rSize + 1];
    for (int i = 0; i < lSize; i++)
    {
        L[i] = arr[i + l];
    }
    for (int i = 0; i < lSize; i++)
    {
        L[i] = arr[i + l];
    }
    for (int i = 0; i < rSize; i++)
    {
        R[i] = arr[i + mid + 1];
    }
    L[lSize] = R[rSize] = INT_MAX;
    int l_i = 0, r_i = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[l_i] <= R[r_i])
        {
            arr[i] = L[l_i];
            l_i++;
        }
        else
        {
            arr[i] = R[r_i];
            r_i++;
        }
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, r, mid);
}

int main()
{
    int n;
    cout << "Enter the size of the array.\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of tha array.\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    cout << "Sorted Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}