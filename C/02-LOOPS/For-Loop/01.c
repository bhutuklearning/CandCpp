// This file is dedicated to solve For loops questions from W3 resources
// Link:-> https://www.w3resource.com/c-programming-exercises/for-loop/index.php

#include <stdio.h>
#include <stdlib.h>

/* Question number 1:
Write a program in C to display the first 10 natural numbers.
Expected Output :
1 2 3 4 5 6 7 8 9 10
*/
void question1()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

/* Question number 2:
Write a C program to compute the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/
void question2()
{
    int sum = 0;
    printf("The first 10 natural numbers are : \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum is : %d\n", sum);
}

/* Question number 3:
Write a program in C to display n terms of natural numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
*/
void question3()
{
    int n, sum = 0;
    printf("Enter the number.\n");
    scanf("%d", &n);
    printf("The first %d natural numbers are : \n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The Sum of Natural Number upto %d terms : %d\n", n, sum);
}

/* Question number 4:
Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
*/
void question4()
{
    int n, sum = 0;
    float avg;
    printf("Input the 10 numbers : \n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        sum += n;
    }
    printf("The sum of 10 numbers is : %d\n", sum);
    avg = sum / 10.0;
    printf("The average is : %0.4f\n", avg);
}

/* Question number 5:
Write a program in C to display the cube of the number up to an integer.
Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125
*/
void question5()
{
    int n;
    printf("Input the number of terms : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Number is : %d and cube of the %d is : %d\n", i, i, i * i * i);
    }
}

void question6();
void question7();
void question8();
void question9();
void question10();
void question11();
void question12();
void question13();
void question14();
void question17();

int main()
{
    printf("********* Question number 1 Solution ************\n");
    question1();
    printf("********* Question number 2 Solution ************\n");
    question2();
    printf("********* Question number 3 Solution ************\n");
    question3();
    printf("********* Question number 4 Solution ************\n");
    question4();
    printf("********* Question number 5 Solution ************\n");
    question5();
    printf("********* Question number 6 Solution ************\n");
    question6();
    printf("********* Question number 7 Solution ************\n");
    question7();
    printf("********* Question number 8 Solution ************\n");
    question8();
    printf("********* Question number 9 Solution ************\n");
    question9();
    printf("********* Question number 10 Solution ************\n");
    question10();
    printf("********* Question number 11 Solution ************\n");
    question11();
    printf("********* Question number 12 Solution ************\n");
    question12();
    printf("********* Question number 13 Solution ************\n");
    question13();
    printf("********* Question number 14 Solution ************\n");
    question14();
    printf("********* Question number 17 Solution ************\n");
    question17();
    return 0;
}

/* Question Number : 6
Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
void question6()
{
    int n;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
}

/* Question Number : 7
Write a program in C to display the multiplier table vertically from 1 to n.
Test Data :
Input upto the table number starting from 1 : 8
Expected Output :
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
*/
void question7()
{
    int n;
    printf("Input the table number from 1 to the desired number you want.\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d x %d = %d, ", j, i, j * i);
        }
        printf("\n");
    }
}

/* Question Number : 8
Write a C program to display the n terms of odd natural numbers and their sum.
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
*/
void question8()
{
    int n = 1, number, sum = 0;
    printf("Input the number of terms(for odd number finding program).\n");
    scanf("%d", &number);
    printf("The odd numbers are : ");
    for (int i = 1; n <= number; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            sum += i;
            n++;
        }
    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d \n", number, sum);
}

/* Question Number : 9
Write a program in C to display a pattern like a right angle triangle using an asterisk.
The pattern like :
*
* *
* * *
* * * *

*/
void question9()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/* Question Number : 10
Write a C program to display a pattern like a right angle triangle with a number.
The pattern like :
1
1 2
1 2 3
1 2 3 4
*/
void question10()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/* Question Number : 11
Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.
The pattern like :
 1
 2 2
 3 3 3
 4 4 4 4
*/
void question11()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

/* Question Number : 12
Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.
The pattern like :
   1
   2 3
   4 5 6
   7 8 9 10
*/
void question12()
{
    int num_increasing = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num_increasing);
            num_increasing += 1;
        }
        printf("\n");
    }
}

/* Question Number : 13
13. Write a program in C to make a pyramid pattern with numbers increased by 1.

   1
  2 3
 4 5 6
7 8 9 10
*/
void question13()
{
    int count = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

/* Question Number : 14
14. Write a C program to make such a pattern as a pyramid with an asterisk.

   *
  * *
 * * *
* * * *

*/
void question14()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

/* Question Number 17
17. Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4
*/
void question17()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}