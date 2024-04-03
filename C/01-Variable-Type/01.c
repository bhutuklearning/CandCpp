// This programming file aims to demonstrate datatypes, different keywords and the memory size consumption of each datatype.
// More specificaly it focuses on primitive datatypes which are the most basic datatypes like int, float, character and double.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    long b;
    long long c;
    double d;
    long double e;
    float f;
    char ch;

    printf(" The size of int = %d bytes \n", sizeof(a));
    printf(" The size of long = %ld bytes \n", sizeof(b));
    printf(" The size of long long = %ld bytes \n", sizeof(c));
    printf(" The size of double = %ld bytes \n", sizeof(d));
    printf(" The size of long double = %ld bytes \n", sizeof(e));
    printf(" The size of float = %ld bytes \n", sizeof(f));
    printf(" The size of character = %ld bytes \n", sizeof(ch));
    return 0;
}

// Remember memory consumption depends Architecture to Architecture.
// More to Read -> https://unstop.com/blog/format-specifiers-in-c (Recommended)
// More to Read -> https://www.geeksforgeeks.org/data-types-in-c/