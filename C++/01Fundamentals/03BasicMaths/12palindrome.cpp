// In this program we aim to find the palindrome using iteration as well as recursion
#include <bits/stdc++.h>
using namespace std;

// Finding palindrome using recursion
int finding_palindrome(string s, int i, int l)
{
    if (i > l / 2)
    {
        return true;
    }
    if (s[i] != s[l - i - 1])
    {
        return false;
    }
    finding_palindrome(s, i + 1, l);
}

int main()
{
    // Finding palindrome using iteration.
    cout << "Palindrome program using iteration.\n";
    string s;
    cout << "Enter the string.\n";
    cin >> s;
    bool palindrome = true;
    int len = s.size();
    for (int i = 0; i <= len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    palindrome ? cout << s << " is a palindrome\n" : cout << s << "is not a palindrome\n";

    // Finding palindrome using recursion.
    cout << "Palindrome program using recursion.\n";
    string str;
    cout << "Enter the string.\n";
    cin >> str;
    int l = str.size();

    if (finding_palindrome(str, 0, l))
    {
        cout << str << " is a palindrome \n";
    }
    else
    {
        cout << str << "is not a palindrome.\n";
    }
    return 0;
}