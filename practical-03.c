// Program to generate n terms of the Fibonacci Series
#include <stdio.h>

int main(){
    int a,b,c,i,terms;

    // read a number of terms form user
    printf("Enter number of term:");
    scanf("%d",&terms);

    // Fibonacci series
    a=0;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    c = a+b;
    printf("Fibonacci terms: \n");

    // Iterate through n terms
    for(i=3;i<=terms;i++){
        printf("%d\n",c);

        a=b; //Copy n-1 to n-2
        b=c; //Copy current to n-1
        c=a+b; //New term

    }
return 0;

}

// Output
// Enter number of terms: 5
// 0
// 1
// Fibonacci terms:
// 1
// 2
// 3