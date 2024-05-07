// Functions
#include <bits/stdc++.h>

using namespace std;

void printName()
{
    cout << "Hey Amritanshu!" << endl;
}

void printParam(string name)
{
    cout << "Hey " << name << endl;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1 = 3, num2 = 4;
    string name = "Bhutuk";
    printName();
    printParam(name);
    int res = sum(num1, num2);
    cout << res;
    return 0;
}