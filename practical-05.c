// Sum of digits of a number Algorithm to find the sum of digits of a number
// C program to accept an integer &amp; find the sum of its digits 

#include <stdio.h>
 
 int main(){
    long num,temp,digit,sum=0;
    printf("Enter the number : \n");
    scanf("%ld",&num);
    temp=num;
    while(num>0){
        digit = num % 10;
        sum = sum + digit;
        num/=10;
    }
    printf("Given number = %ld\n",temp);
    printf("Sum of the digit %ld = %ld\n",temp,sum);
    return 0;
    }

// Output:
// Enter the number
// 2345
// Given number = 2345
// Sum of the digits 2345 = 14