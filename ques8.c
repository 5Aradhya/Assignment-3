#include <stdio.h>
int main()
{
    // Write a c program to generate the first n terms of the fibonacci series using a for loop . use the adition operator (+) to calculate  the next term in the series
    int n, i;
    int n1 = 0, n2 = 1;
    int nextTerm = n1 + n2;
    printf("Enter the number of terms :");
    scanf("%d", &n);
    printf("Fibonacci series : %d,%d,", n1, n2);
    for (i = 3; i <= n; ++i)
    {
        n1 = n2;
        n2 = nextTerm;
        nextTerm = n1 + n2;
    }
    printf("%d", nextTerm);
    return 0;
}