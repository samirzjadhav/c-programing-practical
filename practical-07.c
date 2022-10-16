//  Sum of Cosine series
// Algorithm to find the sum of cos(x) series

// 1.[read no of terms and degrees]
// Read n , x
// 1. [convert degrees to radians]
// x := x * (3.142 / 180.0);
// 2. set cosx := 1
// sign := -1
// 4.[loop to compute each term of the series]
// Repeat for i = 2 to i &lt;= n step 2
// [loop to compute factorial]
// fact := 1
// Repeat for j : = 1 to j &lt;= I step 1
// fact = fact * j;
// (end for)
// cosx := cosx + (pow(x, i) / fact) * sign
// sign := sign * (-1)
// (end for)
// 5.Write cosx
// 6.exit

#include <stdio.h>
#include <math.h>

int main(){
    int n,x1,i,j;
    float x,sign,cosx,fact;

    printf("Enter he number of the terms in a series\n");
    scanf("%d",&n);

    printf("Enter the value of x(in degrees)\n");
    scanf("%f",&x);

    x1 = x;
    // Degrees to radians
     x = x*(3.142/180.0);
    cosx = 1;
    sign=-1;
    for(i=2; i<=n; i=i+2){
    fact=1;
    for(j=1;j<=i;j++){
    fact=fact*j;
                    }
cosx=cosx+(pow(x,i)/fact)*sign;
sign =sign*(-1);
    }
    printf("Sum of the cosine series = %7.2f\n",cosx);
    printf("The value of cos(%d) using library function = %f\n,",x1,cos(x1));
    return 0;
}

// Output:
// Enter the number of the terms in a series
// 5
// Enter the value of x(in degrees)
// 45
// Sum of the cosine series = 0.71
// The value of cos(45) using library function = 0.525322
// Enter the number of the terms in a series
// 5
// Enter the value of x(in degrees)
// 0
// Sum of the cosine series = 1.00
// The value of cos(0) using library function = 1.000000