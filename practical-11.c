// 11. To delete an element from one dimensional Array
// Algorithm to delete an element form one dimensional Array
// 1.[Read no of elements of the array]
// Read num
// 2. [read elements into the array]
// Repeat for I := 0 to I &lt; len step 1
// Read arr1[i]
// (end for)
// 3. [read location of deletion]

// Read location

// 4.[deletion]
// Repeat while (loc &lt; num)       
// arr[loc - 1] := arr[loc]    
//  loc := loc + 1   
// (end while)
// 5. Num := num -1 ;  // No of elements reduced by 1
// 6. exit

// Program to delete an element form one dimensional array.

#include <stdio.h>

int main(){
    int arr[30],num,i,loc;

    printf("\nEnter no of elements");
    scanf("%d",&num);

    // Read element in an array
    printf("\nEnter %d elements",num);
    for(i=0;i<num;i++){
    scanf("%d",&arr[i]);
    }
   
   // Read the location
    printf("\n location of the element to be deleted:");
   scanf("%d",&loc);

   // Loop for the deletion
   while(loc < num){arr[loc-1] = arr[loc];
   loc++;}
   
   num--; //No of elements reduced by 1

   // Print Array
   for(i=0;i<num;i++){
    printf("\n %d",arr[i]);
   }
}
// Output:
// Enter no of elements :5
// Enter 5 elements :1
// 2
// 3
// 4
// 5
// location of the element to be deleted :3
// 1
// 2
// 4
// 5