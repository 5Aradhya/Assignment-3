#include <stdio.h>
int main()
{
    // Write a c program to check if a given number is prime using a for loop and the modulas operator(%) .A prime number is only divisible by 1 and itself
    int userInput;
    printf(" Enter your number :");
    scanf("%d", &userInput);
    if (userInput % 1 == 0 || userInput % userInput == 0)
    {
        printf(" your number is prime number");
    }
    else
    {
        printf("your number is not a prime number ");
    }
}