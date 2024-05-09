/*
Given each test case t and in each test case
there is number n. Print its factorial for each test case % M
where M = 10^9 + 7

Constraints
 1 <= t <= 10^5
 1 <= n <= 10^5
 */
#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % M;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }

    return 0;
}
// Total time complexity is 10^5 + 10^5 not 10^5* 10^5