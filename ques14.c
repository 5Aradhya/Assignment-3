#include <stdio.h>
void main()
{
    int i;
    int num, oddSum = 0, evenSum = 0;

    printf("enter the value of num :");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
        }
        else
        {
            oddSum = oddSum + i;
        }
    }
    printf(" sum of all odd numbers is : %d\n", oddSum);
    printf("sum of all even number is : %d\n", evenSum);
}