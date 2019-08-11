//Write a C program to check if a given Number is zero or Positive or Negative Using if...else statement.
#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number); 
 if (number <= 0.0)
    {
        if (number == 0.0)
            printf("The number is 0.\n");
        else
            printf("Negative number.\n");
    }
    else
        printf("Positive number.\n");
}
//output:
14.05
Positive number.
0.45
Positive number.
-50
Negative number.
0
The number is 0.

