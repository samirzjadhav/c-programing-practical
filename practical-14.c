/*
14. To find the sum of two matrices of order 2*2
Algorithm to find the sum of two matrices of order 2*2
1. Start
2. Repeat for i= 0 to i &lt; 2 step 1[read first matrix]
Repeat for j = 0 j &lt; 2 step 1
Read a[i][j]
(end for)
(end for)
3. Repeat for i = 0 to I &lt; 2 step 1
Repeat for j = 0 j &lt; 2 step 1
Read b[i][j]
(end for)
(end for)
4. [matrix addition]
Repeat for I = 0 to i &lt; 2 step 1
Repeat for j = 0 j &lt; 2 step 1
C[j][j] := a[i][j] + b[i][j]
Write c[i][j]
(end for)
(end for)
5. exit
*/

// C program to find the sum of two matrices of order 2*2-v
#include <stdio.h>
int main() {
  float a[2][2], b[2][2], c[2][2];
  int i, j;

  // Taking input for first matrix using nested for loop
  printf("Enter elements of 1st matrix \n");

  for (i = 0; i < 2; ++i) {
    for (j = 0; j < 2; ++j) {
      printf("Enter a[%d][%d]:", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }
  }

  // Taking input for second matrix using nested for loop
  printf("Enter elements of 2st matrix \n");

  for (i = 0; i < 2; ++i) {
    for (j = 0; j < 2; ++j) {
      printf("Enter b[%d][%d]:", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }
  }

  for (i = 0; i < 2; ++i) {
    for (j = 0; j < 2; ++j) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  // Displaying the sum
  printf("\n Sum Of Matrix:");
  for (i = 0; i < 2; ++i) {
    for (j = 0; j < 2; ++j) {
      printf("%.1f\t", c[i][j]);
      printf("\n");
    }
  }
}
/*
Output:
Enter elements of 1st matrix
Enter a[1][1] : 1
Enter a[1][2] : 2
Enter a[2][1] : 3
Enter a[2][2] : 4
Enter elements of 2nd matrix
Enter b[1][1]: 5
Enter b[1][2]: 6
Enter b[2][1]: 7
Enter b[2][2]: 8

Sum Of Matrix:
6.0 8.0
10.0 12.0
*/