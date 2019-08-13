//Write a C program to find the sum of all elements of each row of a matrix.
#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
int sum;
    for(i=0;i< r;i++)
    {
        sum=0;      
        for(j=0;j< c;j++)
        {
          //  printf("%d\t",matrix[i][j]);   
            sum     +=  matrix[i][j];
        }
        printf("%d\n",sum);
    }
 
}
/*output:
3//row count
3//column count
4
5
6
6
7
3
1 
2
3
ans:
15
16
6

*/
