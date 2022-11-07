/*
13. Transpose of a matrix
Algorithm to find the transpose of a given matrix

1. [read the order of the matrix]
Read m,n

2.Repeat for i=0 to i &lt;m step 1
Repeat for j = 0 to j &lt; n step 1
Read arr[i][j]
(End for)
(End for)

3.[transpose]
Repeat for i=0 to i &lt; n step 1
Repeat for j = 0 to j &lt; m step 1
Write a[i][j]
(End for)
(End for)
4.Stop
*/

#include <stdio.h>

int main(){
    static int array[10][10];
    int i,j,m,n;
    printf("\nEnter the order of matrix : ");
    scanf("%d%d",&n,&m);
    printf("Enter the Valus\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;++j)
            scanf("%d",&array[i][j]);  
    }
    printf("The given matrix is \n");
    for(i=0;i<m;++i){
        for(j=0;j<n;++j)
        printf("%d\t",array[i][j]);
        printf("\n"); 
    }

 printf("Transpose of mattrix is \n");
 for(j=0;j<n;++j){
    for(i=0;i<m;++i)
    printf("%d\t",array[i][j]);
    printf("\n");
    }
 }

// Output:
// Enter the order of the matrix
// 3
// 3
// Enter the values
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// The given matrix is
// 1 2 3
// 4 5 6
// 7 8 9

// Transpose of matrix is
// 1 4 7
// 2 5 8
// 3 6 9