//Write a C Program to find HCF of 4 given numbers using recursive function
#include<stdio.h>
int hcf(int, int);  
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = hcf(hcf(a, b), hcf(c,d));
   printf("The HCF is %d\n", result);
}
int hcf(int x, int y)
{
   while (x != y)
   {
      if (x > y)
       {
           return hcf(x - y, y);
       }
       else
       {
       return hcf(x, y - x);
       }
    }
    return x;
}
/*output:
100
30
50
70
The HCF is 10

*/
