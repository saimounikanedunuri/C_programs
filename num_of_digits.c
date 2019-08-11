//Write a C program to count total number of digits of an Integer number 
#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N);

int temp, count; 
count=0;
    temp=N;
    while(temp>0)
	{
        count++;
        temp/=10;
    }
     printf("\nThe number %d contains %d digits.",N,count);
}
/*output:
3456

The number 3456 contains 4 digits.
30000

The number 30000 contains 5 digits.
*/

