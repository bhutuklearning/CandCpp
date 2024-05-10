#include <bits/stdc++.h>
using namespace std;

int palindrome(string s, int i, int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }

    return palindrome(s, i + 1, n);
}

int main()
{
    string s;
    cin >> s;
    int l = s.size();
    palindrome(s, 0, l) ? cout << s << " is a palindrome.\n" : cout << s << " is not a palindrome.\n";
    return 0;
}