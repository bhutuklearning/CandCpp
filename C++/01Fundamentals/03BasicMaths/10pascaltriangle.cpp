#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int arr[N][N];

int main()
{
    int n;
    cout << "Enter the number.\n";
    cin >> n;
    arr[0][0] = 1;
    cout << "Pascal Triangle.\n";
    for (int i = 1; i < n; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - (2 * i + 1) / 2) - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << " ";
        }
        for (int j = 0; j < (n - (2 * i + 1) / 2) - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}