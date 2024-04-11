#include <bits/stdc++.h>

using namespace std;

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void pattern12(int &n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
void pattern13(int &n)
{
    cout << "Pattern 13\n";
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            k += 1;
            cout << k << " ";
        }
        cout << "\n";
    }
}

/*
A
A B
A B C
A B C D
A B C D E
*/
void pattern14(int &n)
{
    cout << "Pattern 14\n";
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}
void pattern14a()
{
    string alphabet = "ABCDE";
    for (int i = 0; i < alphabet.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << alphabet[j] << " ";
        }
        cout << "\n";
    }
}

/*
A B C D E
A B C D
A B C
A B
A
*/
void pattern15(int &n)
{
    cout << "Pattern 15\n";
    for (int i = n - 1; i >= 0; i--)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}
void pattern15a()
{
    string alphabet = "ABCDE";
    for (int i = alphabet.size(); i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << alphabet[j] << " ";
        }
        cout << "\n";
    }
}

/*
A
B B
C C C
D D D D
E E E E E
*/
void pattern16(int &n)
{
    cout << "Pattern 16\n";
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            ch = 'A' + i;
            cout << ch << " ";
        }
        cout << "\n";
    }
}
void pattern16a()
{

    string alphabet = "ABCDE";
    for (int i = 0; i < alphabet.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << alphabet[i] << " ";
        }
        cout << "\n";
    }
}

//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E C D B A
void pattern17(int &n)
{
    cout << "Pattern 17\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
E
D E
C D E
B C D E
A B C D E
*/
void pattern18(int &n)
{
    cout << "Pattern 18\n";

    for (int i = 0; i < n; i++)
    {
        char ch = 'E';
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << "\n";
    }
}

void pattern18a(int &n)
{
    cout << "Pattern 18\n";

    for (int i = 0; i < n; i++)
    {
        for (int ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

void pattern19(int &n);
void pattern20(int &n);
void pattern21(int &n);
void pattern22(int &n);

int main()
{
    int n;
    cout << "Enter the number.\n";
    cin >> n;
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    return 0;
}

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
void pattern19(int &n)
{
    cout << "Pattern 19\n";
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

/*
 *        *
 **      **
 ***    ***
 ****  ****
 **********
 ****  ****
 ***    ***
 **      **
 *        *
 */
void pattern20(int &n)
{
    cout << "Pattern 20\n";
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
        for (int j = 1; j <= 2 * (n - stars); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

/*
*****
*   *
*   *
*   *
*****
*/
void pattern21(int &n)
{
    cout << "Pattern 21\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
void pattern22(int &n)
{
    cout << "Pattern 22\n";
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << "\n";
    }
}