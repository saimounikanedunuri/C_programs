//Write a program to find the factorial of a given number using while loop.
#include<stdio.h>
void main()
{
    int n;
    long int fact; 
    scanf("%d",&n);
int i=1;
fact = 1;
while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("\nThe Factorial of %d is : %ld",n,fact);
}
/*output:
5

The Factorial of 5 is : 120
10

The Factorial of 10 is : 3628800
*/

