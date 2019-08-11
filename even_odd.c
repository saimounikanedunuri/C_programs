//Write a C program to check whether a given number (integer) is Even or Odd. 
#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number); 
if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
}
/*output:
24
24 is even.
-25
-25 is odd.*/
