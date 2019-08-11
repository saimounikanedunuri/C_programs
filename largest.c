//Write a C Program to find the Largest Number (integer)  among Three Numbers (integers) using IF and Logical && operator.
#include <stdio.h>
int main()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3); 
  if( n1>=n2 && n1>=n3 )
        printf("%d is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%d is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%d is the largest number.", n3);
}
/*output
45 34 67
67 is the largest number.
80 -5 3
80 is the largest number.
-9 -4 -20
-4 is the largest number.*/

