//Write a Program to find the sum of all even numbers from 1 to N where the value of N is taken as input. [For example when N is 10 then the sum is 2+4+6+8+10 = 30]
#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N);
int i;
for (i = 1; i <= N; i++)
{
if (i % 2 == 0)
sum = sum + i;
}
printf("\nSum = %d", sum);
}
/*output:
10

Sum = 30
30

Sum = 240
*/
