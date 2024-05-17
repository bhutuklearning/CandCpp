// Merge Sort Program
// In this Merge Sort Program array is declared globally
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int arr[N];

void merge(int l, int r, int mid)
{
    int lSize = mid - l + 1;
    int rSize = r - mid;
    int L[lSize + 1];
    int R[rSize + 1];
    for (int i = 0; i < lSize; i++)
    {
        L[i] = arr[i + l];
    }
    for (int i = 0; i < rSize; i++)
    {
        R[i] = arr[mid + i + 1];
    }
    L[lSize] = R[rSize] = INT_MAX;
    int l_i = 0, r_i = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[l_i] < R[r_i])
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

void mergeSort(int l, int r)
{
    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}
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

    // Calling mergeSort function.
    mergeSort(0, n - 1);

    cout << "Sorted Array.\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// Recommended
// Time Complexity of merge sort is O(nLogn)
// Space complexity: O(n)