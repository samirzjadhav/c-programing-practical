/*
12. Traversing 2D array
Algorithm on Traversing 2D Array
1. start
2. Repeat for i=0 to i&lt;4 step 1{  
3. Repeat for j=0 to j&lt;3 step 1  
    Write arr[i][j]  
 ( end for)//end of j  
(end for )//end of i  
4.exit
*/

#include <stdio.h>

int main(){
    int i=0,j=0;
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    
    //traversing 2D array  
for(i=0;i<4;i++){
    for(j=0;j<3;j++){
       printf("%d\t",arr[i][j]);
    } // End of j
    printf("\n");
} // end of i
}

// Output:
// 1 2 3
// 2 3 4
// 3 4 5
// 4 5 6