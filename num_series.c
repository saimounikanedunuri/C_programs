/*

Write a C program to find sum of following series where the value of N is taken as input

 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N */
#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N);
int i;
for(i=1;i<=N;i++)
sum = sum + ((float)1/(float)i);
printf("\nSum of the series is: %.2f",sum);
}
/*output:
6

Sum of the series is: 2.45
50

Sum of the series is: 4.50
*/

