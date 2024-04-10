// Pass by Value and pass by reference
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Pass by Value
void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// Pass by Reference
void changeName(string &b)
{
    b[0] = 'A';
    cout << b << endl;
}

void passArr(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] + 5 << " ";
    }
    cout << endl;
}

int main()
{

    int num = 10;
    doSomething(num);
    cout << num << endl;
    string b = "Bhutuk";
    cout << b << endl;
    changeName(b);
    cout << b << endl;
    int c = 5;
    int arr[c];

    for (int i = 0; i < c; i++)
    {
        cin >> arr[i];
    }

    passArr(arr, c);
    for (int i = 0; i < c; i++)
    {
        cout << arr[i] + 5 << " ";
    }
    return 0;
}