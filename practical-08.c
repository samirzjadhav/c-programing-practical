//  Sum of sine series
// Algorithm to find the sum of sin(x) series

// 1. [read no of terms and degrees]
// Read n , x
// 2. [convert degrees to radians]
// x := x * (3.142 / 180.0)
// 3 set sinx := x
// sign := -1
// 4.[loop to compute each term of the series]
// Repeat for i = 3 to i &lt;= n step 2
// [loop to compute factorial]
// fact := 1
// Repeat for j : = 1 to j &lt;= I step 1
// fact = fact * j;
// (end for)
// sinx := sinx + (pow(x, i) / fact) * sign
// sign := sign * (-1)
// (end for)
// 5. Write sinx
// 6.exit

#include <stdio.h>
#include <math.h>

int main(){
    int n,x1,i,j;
    float x,sign,sinx,fact;

    printf("Enter he number of the terms in a series\n");
    scanf("%d",&n);

    printf("Enter the value of x(in degrees)\n");
    scanf("%f",&x);

    x1 = x;
    // Degrees to radians
     x = x*(3.142/180.0);
    sinx = 1;
    sign=-1;
    for(i=2; i<=n; i=i+2){
    fact=1;
    for(j=1;j<=i;j++){
    fact=fact*j;
                    }
sinx = sinx+(pow(x,i)/fact)*sign;
sign = sign*(-1);
    }
    printf("Sum of the cosine series = %7.2f\n",sinx);
    printf("The value of sin(%d) using library function = %f\n,",x1,sin(x1));
    return 0;
}

// Output:
// Enter the number of the terms in a series
// 5
// Enter the value of x(in degrees)
// 90
// Sum of the sine series = 1.00
// The value of sin(90) using library function = 0.893997