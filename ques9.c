#include <stdio.h>
int main(){
    // Write a c program to count the number of digits in a given integer using a while loop the division operator (/) . for example ,if the input is 1234,the output should be 4.
    long long num;
    int count = 0;

    printf("enter any number : ");
    scanf("%d",&num);
    do
    {
        count++;
        num /= 10;
    } while ( num !=0);

    printf("total digits : %d",count);
    return 0;
    
}