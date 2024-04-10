#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
     int x;
     cout << "Hey Amritanshu" << endl;
     cout << "Enter the value of x" << endl;
     cin >> x;
     cout << "Value of x is: " << x << endl;
     // Datatype: Int
     int a = 23;
     long b = 456799;
     long long c = 784569314845;
     cout << "Integer(Int)" << endl
          << a << " int" << "  " << sizeof(a) << " bytes" << endl
          << b << " long " << "  " << sizeof(b) << " bytes" << endl
          << c << " long long " << "  " << sizeof(c) << " bytes" << endl;

     // Datatype: Float
     float u = 23.65;
     double v = 4567.96258;
     long double w = 569712136744.755696624;
     cout << "Float" << endl
          << u << " float" << "  " << sizeof(u) << " bytes" << endl
          << v << " double" << "  " << sizeof(v) << " bytes" << endl
          << w << " long double" << "  " << sizeof(w) << " bytes" << endl;
     // Datatype: String
     string s1, s2;
     cout << "Enter String 1 and String 2" << endl;
     cin >> s1 >> s2;
     cout << s1 << " string" << "  " << sizeof(s1) << " bytes" << endl
          << s2 << " string" << "  " << sizeof(s2) << " bytes" << endl;
     // Multiple words strings

     string line;
     getline(cin, line);
     cout << line << endl;
     // Character
     char ch0 = 'a';
     cout << "Character" << endl;
     cout << ch0 << " character" << "  " << sizeof(ch0) << " byte" << endl;
     char ch1;
     cout << "Enter a character: " << endl;
     cin >> ch1;
     cout << ch1 << " character" << "  " << sizeof(ch1) << " byte" << endl;

     // Set Precision and Rounding of floating numbers.
     cout << "Original value of floating number u: " << u << endl;
     cout << "Value of u after setprecision keyword  " << setprecision(2) << u << endl;
     cout << "Value of u after fixed and setprecision keyword  " << fixed << setprecision(2) << u << endl;
     cout << "Original value of double number v: " << v << endl;
     cout << "Value of v after setprecision keyword  " << setprecision(6) << v << endl;
     cout << "Value of v after fixed and setprecision keyword  " << fixed << setprecision(6) << v << endl;
     cout << "Original value of long double number w: " << w << endl;
     cout << "Value of w after setprecision keyword  " << setprecision(14) << w << endl;
     cout << "Value of w after fixed and setprecision keyword  " << fixed << setprecision(14) << w << endl;
     return 0;
}