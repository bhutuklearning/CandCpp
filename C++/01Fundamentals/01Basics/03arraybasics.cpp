#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Integer array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << endl;
    arr[2] += 15;
    arr[3] = 99;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << endl;
    // 2d Array
    int a[2][3];
    cin >> a[0][1];
    cout << a[0][1] << endl;
    // Strings
    string s = "Bhutuk";
    int len = s.size();
    cout << s << endl;
    cout << s[0] << " " << len << " " << s[len - 1] << endl;
    s[len - 2] = 'a';
    cout << s[len - 2] << " " << s << endl;
    return 0;
}