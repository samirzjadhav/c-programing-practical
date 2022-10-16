// Reverse the Given Number
// Algorithm to reverse the given number

// 1. Read n
// 2. Repeat while ( n !=0)
// remainder = n%10;

// reversedNumber = reversedNumber*10 + remainder;
// n /= 10;
// (end while)
// 3. Write reversedNumber
// 4. Exit

// Program to reverse the given number

#include <stdio.h>

int main(){
    int n,reversedNumber=0,reminder;
    printf("Enter an integer:");
    scanf("%d",&n);
    while(n != 0){
        reminder = n % 10;
        reversedNumber = reversedNumber*10+reminder;
        n/= 10;
    }

    printf("Revesed Number = %d",reversedNumber);
    return 10;
}  

// Output:
// Enter an integer: 1234
// Reversed Number = 4321