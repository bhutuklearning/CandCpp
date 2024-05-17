// Merge Sort Program
// In this Merge Sort Program array is passed in the function and STL is also used.
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int r, int mid)
{
    int left = l;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= r)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
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
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    cout << "Original Array.\n";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    mergeSort(arr, 0, n - 1);
    cout << "Sorted Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// Not Recommended