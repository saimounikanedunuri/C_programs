//Write a C Program to find Largest Element of an Integer Array. 
#include <stdio.h>

int main()
{
    int i, n, largest;
    int arr[100];

    scanf("%d", &n); /*Accepts total number of elements from the test data */

 for(i = 0; i < n; ++i)
    {
       scanf("%d", &arr[i]); /* Accepts the array element from test data */
    }
largest = arr[0];
for(i = 1; i < n; ++i)
    {
           if(largest < arr[i])
           largest = arr[i];
    }
    printf("Largest element = %d", largest);

    return 0;
}
/*output:
5
200
12
40
-90
60
Largest element = 200
*/
