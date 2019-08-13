//Write a C program to print a triangle of prime numbers upto given number of lines of the triangle.
#include<stdio.h>
 
int prime(int num); //Function to find whether the number is prime or not.
int main() {
   int lines;
   scanf("%d", &lines); 
int i, j;
int num = 2;
for (i = 0; i < lines; i++) {
      
   for (j = 0; j <= i; j++) {
      while (!prime(num)) 
      {
         num++;
      }
         printf("%d\t", num++);  
      }
      printf("\n");
   }
   return (0);
}
 
int prime(int num) {
   int i, flag;
   for (i = 2; i < num; i++) {
      if (num % i != 0)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
 
   if (flag == 1 || num == 2)
      return (1);
   else
      return (0);
}
/*output:
3//n
2	
3	5	
7	11	13	

5//n
2	
3	5	
7	11	13	
17	19	23	29	
31	37	41	43	47	
*/
