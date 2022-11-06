// To find the area and circumference of a circle

#define PI 3.14
#include <stdio.h>

int main(){
    float radius,area,circum;
    printf("\nEnter the radius of Circle :");
    scanf("%f",&radius);

    area =PI*radius*radius;
    circum=2*PI*radius;
    printf("\nArea of circle: %f",area);
    printf("\n circumference = %f\n",circum);
   return 0;
}

// Output:
// Enter the radius of Circle : 2
// Area of Circle : 12.560000
// circumference = 12.560000