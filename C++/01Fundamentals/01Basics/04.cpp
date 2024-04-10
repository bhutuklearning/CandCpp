#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 1;
    for (i = 1; i <= 5; i++)
    {
        cout << "Loop" << endl;
    }
    cout << i << endl;

    int j = 1;
    while (j <= 5)
    {
        cout << "Loop" << j << endl;
        j++;
    }
    cout << j << endl;

    int k = 2;
    do
    {
        cout << "Count" << k << endl;
        k++;
    } while (k <= 1);
    return 0;
}