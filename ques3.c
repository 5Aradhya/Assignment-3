#include <stdio.h>
int main(){
// Write a c program that uses the size of operator to display the size of different data types (int,float,double,char) in bytes
int intValue;
char charValue;
float floatValue;
double doubleValue;
printf(" size of int value is : %zu bytes\n",sizeof(intValue));
printf("size of float value is : %zu bytes\n",sizeof(floatValue));
printf("size of double value is :%zu bytes\n",sizeof(doubleValue));
printf("size of char value is : %zu bytes \n",sizeof(charValue));
}