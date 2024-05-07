// Print all divisors
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m = 0;
    cin >> n;
    int arr[n];

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[m++] = i;
            if (n / i != i)
            {
                arr[m++] = (n / i);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}