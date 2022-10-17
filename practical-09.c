// 9. Print half pyramid using *
// Algorithm to print half pyramid using *

// 1.Read rows
// 2.Repeat for I := 1 to I &lt;= rows step 1
// Repeat for j : =1 to j &lt;= I step 1
// Write “ *\t”
// (end for)
// (end for)
// 3.exit

#include <stdio.h>

int main()
{
int i, j, rows;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=1; i<=rows; ++i)
{
for(j=1; j<=i; ++j)
{
printf("* \t");
}
printf("\n");
}}

// Output:
// Enter number of rows: 5
// *
// * *
// * * *
// * * * *
// * * * * *