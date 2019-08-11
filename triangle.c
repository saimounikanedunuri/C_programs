// The length of three sides are taken as input. Write a C program to find whether a triangle can be formed or not. If not display “This Triangle is NOT possible.” If the triangle can be formed then check whether the triangle formed is equilateral, isosceles, scalene or a right-angled triangle. (If it is a right-angled triangle then only print that it is a Right-angle triangle do not print it as scalene triangle).  
#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); 
if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        if(a==b&&a==c&&b==c)
        printf("Equilateral Triangle");
          else if(a==b||a==c||b==c)
          printf("Isosceles Triangle");
          else   
    if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
        printf("Right-angle Triangle");
        else if(a!=b&&a!=c&&b!=c)
        printf("Scalene Triangle");
    }
    else
    printf("Triangle is not possible");
}
/*output:
10 4 6
Triangle is not possible
7 6 8
Scalene Triangle
3 4 5
Right-angle Triangle
5 12 13
Right-angle Triangle
9 9 9
Equilateral Triangle
*/
