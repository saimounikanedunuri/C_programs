//Write a program to print all the locations at which a particular element(taken as input) is found in a list and also print the total number of times it occurs in the list. The location starts from 1.
#include <stdio.h>
int main()
{
   int array[100], search, n, count = 0;
   scanf("%d", &n); //Number of elements is taken from test case

 int c;
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   scanf("%d", &search); 
for (c = 0; c < n; c++)
    {
      if (array[c] == search)
      {
         printf("%d is present at location %d.\n", search, c+1);
         count++;
      }
    }
   if (count == 0)
      printf("%d is not present in the array.\n", search);
   else
      printf("%d is present %d times in the array.\n", search, count);

   return 0;
}
/*output:
4//n
5
6
5
7
5//finding num
5 is present at location 1.
5 is present at location 3.
5 is present 2 times in the array.

*/
