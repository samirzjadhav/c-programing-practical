// 10. Insert an element a specified location
// Algorithm to insert an element at a specified location

// 1. [Read no of elements of the array]
//              Read num

// 2. [read elements into the array]
// Repeat for I := 0 to I &lt; len step 1
// Read arr1[i]
// (end for)

// 3. [read element to insert and location]
// Read element, location

// 4.[create space for insertion at the location]
// Repeat for i = num to i &gt;= location step -1
// arr[i] = arr[i - 1]
// (end for)

// 5.[Increament no of elements]

// Set num := num + 1

// 6. [do the insertion]
// arr[location - 1] = element;

// 7.exit

#include <stdio.h>

int main(){
    int arr[30],element,num,i,location;
    printf("Enter number of element:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    scanf("%d",&arr[i]);
    printf("\nEnter the element to be inserted :");
    scanf("%d",&element);
    printf("\nEnter the location: ");
    scanf("%d",&location);
    
    // Create space at the specified location
    for(i=num;i>=location;i--)
    arr[i]=arr[i-1];
     num++;
    arr[location-1]=element;

// Print out the result of insertion
    for(i=0;i<num;i++)
    printf("\n%d",arr[i]);    
}

// Output
// Enter no of elements :5
// 1
// 2
// 3
// 4
// 5

// Enter the element to be inserted :22

// Enter the location2
// 1
// 22
// 2
// 3
// 4
// 5