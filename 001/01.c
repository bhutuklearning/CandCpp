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
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum is : %d\n", sum);
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

int main()
{
    question1();
    question2();
    question3();
    question4();
    question5();
    return 0;
}