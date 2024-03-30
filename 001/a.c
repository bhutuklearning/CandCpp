#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter the age.\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}