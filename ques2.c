#include <stdio.h>
int main()
{
    // Implement a simple calculator program that takes two numbers and an operator (+,-,*,/) as input and performs the corresponding operation
    int a, b;
    char op;
    printf(" enter your operation -: +,-,*,/ : ");
    scanf("%c", &op);
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        printf("Your sum is : %d", a + b);
        break;

    case '-':
        printf("your sub is : %d", a - b);
        break;

    case '*':
        printf("your mult is : %d", a * b);
        break;

    case '/':
        printf(" your div is : %d", a / b);
        break;
    }
}