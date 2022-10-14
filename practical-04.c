// Prime number Algorithm to check whether the given number is prime or not
#include <stdio.h>

int main(){
    int n,i,flag=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
   // Condition for nonprime number
   if(n%i==0){
    flag =1;
    break;
   }
    }
    if(flag==0)
     printf("%d is a prime number.",n);
    else
     printf("%d is not prime number.",n);
    return 0;
}

// Output:
// Enter a positive integer: 7
// 7 is a prime number.
// Enter a positive integer: 5
// 5 is a prime number.
// Enter a positive integer: 23
// 23 is a prime number.