//C Program to delete an element from a specified location of an Array starting from array[0] as the 1st position, array[1] as second position and so on. 
#include<stdio.h>
int main() {
int array[30], num, i, pos;
 scanf("%d", &num); /*Accepts the size of array from test case data */
 
   for (i = 0; i < num; i++) {
      scanf("%d", &array[i]);  /* Read the array elements from the test case data */
   }
 
   scanf("%d", &pos); /* Accepts the Position of the element to be deleted */
/* loop for the deletion  */
   while (pos < num) {
      array[pos - 1] = array[pos];
      pos++;
   }
   num--; /* No of elements reduced by 1 as 1 element is deleted */
/* Printing the array after deletion */

for (i = 0; i < num; i++)
      printf("%d\n", array[i]);
 
   return (0);
}
/*output:
3//n
10
20
30
2//position
10
30

*/
