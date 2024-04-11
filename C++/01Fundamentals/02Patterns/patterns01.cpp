// Logical Thinking
#include <bits/stdc++.h>

using namespace std;

/*
 * * *
 * * *
 * * *
 */
void pattern1(int &n)
{
    cout << "Pattern 1" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*
 *
 * *
 * * *
 * * * *
 */
void pattern2(int &n)
{
    cout << "Pattern 2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*
1
1 2
1 2 3
*/
void pattern3(int &n)
{
    cout << "Pattern 3" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

/*
1
2 2
3 3 3
*/
void pattern4(int &n)
{
    cout << "Pattern 4" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */
void pattern5(int &n)
{
    cout << "Pattern 5" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
void pattern6(int &n)
{
    cout << "Pattern 6" << endl;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern7(int &n);
void pattern8(int &n);
void pattern9(int &n);
void pattern10(int &n);
void pattern11(int &n);

int main()
{
    int n;
    cout << "Enter the number.\n";
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    return 0;
}

//      *
//     ***
//    *****
//   *******
//  *********
void pattern7(int &n)
{
    cout << "Pattern 7 \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

// *********
//  *******
//   *****
//    ***
//     *
void pattern8(int &n)
{
    cout << "Pattern 8\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << "\n";
    }
}

//      *
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***
//      *
void pattern9(int &n)
{
    cout << "Pattern 9\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << "\n";
    }
}

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
void pattern10(int &n)
{
    cout << "Pattern 8\n";
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern11(int &n)
{
    cout << "Pattern 11\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}