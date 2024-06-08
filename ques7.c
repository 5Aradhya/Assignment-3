#include <stdio.h>
int main()
{
    // Write a c program to find the sum of the digit of a given integer using a while loop and the modulas operator (%) and division (/) operator
    int i, n, sum = 0;
    printf("enter your number :");
    scanf("%d", &n);

    while (i > 0)
    {
        n = i % 10;
        sum = sum + n;
        n = n / 10;
    }
    printf("your digits sum is : %d", sum);
}