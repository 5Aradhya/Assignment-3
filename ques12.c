#include <stdio.h>

    // Write a c program to to find the greatest common divisor (GCD) of two number using a while loop and the modulas (%). Implement the euclidean algorithm.
    // c program to find GCD  of the numbers
int gcd(int a, int b){
if(a == 0)
    return b;
    if(b == 0)
      return a;
       
       if(a == b)
          return a;

        if( a > b)
            return gcd(a - b, b);
       return gcd(a, b - a);  
}

int main (){

    int a = 98, b = 56;
    printf("GCD of %d and %d is %d : ", a,b,gcd(a,b));
    return 0;
}