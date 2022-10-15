// C program to enter marks of five subjects and find percentage and grade
#include <stdio.h>
 
 int main(){
    int phy,chem,bio,math,comp; // Five subject
    float per;

    // read marks of five subject from user
    printf("Enter five subjects marks:");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);

    // Calculates Percentage
    per=(phy+chem+bio+math+comp)/5.0;
    printf("Percentage=%2f/n",per);

    // finds grade ccording to the percentage 
    if(per>90)printf("Grade A");
    else if(per>80)printf("Grade B");
    else if(per>70)printf("Grade C");
    else if(per>60)printf("Grade D");
    else if(per>40)printf("Grade E");
    else printf("Grade F");
 }

// Output:
// Enter five subjects marks: 55
// 66
// 77
// 88
// 99
// Percentage = 77.00
// Grade C