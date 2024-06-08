#include <stdio.h>
int main()
{
    // Write a c program to reverse a given integer using while loop and the modulas operator (%) and division operator (/). if the input is 1234, the output should be 4321
    int integer, i, remai, reverse = 0;
    printf("enter your number:");
    scanf("%d", &integer);

    while (integer != 0)
    {
        reverse = integer % 10;
        reverse = reverse * 10 + remai;
        integer /= 10;
    }
    printf("reversed number is :%d", reverse);
}