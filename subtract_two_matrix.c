//Write a C program to find subtraction of two matrices i.e. matrix_A - matrix_B=matrix_C.
#include <stdio.h>
int main()
{
	int matrix_A[20][20], matrix_B[20][20], matrix_C[20][20];
    int i,j,row,col;
    scanf("%d",&row); //Accepts number of rows
    scanf("%d",&col); //Accepts number of colums 
 
    /* Elements of first matrix are accepted from test data */
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_A[i][j]);
        }
    }

/* Elements of second matrix are accepted from test data */
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_B[i][j]);
        }
    }

   for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
    
            matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j];
        }
    }

     for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", matrix_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*output:
3//2 matrices row sizes 
3//col size
2 3 5     and  	  1 5 2    
4 5 6             2 3 4                                           
6 5 7             3 3 4 
ans:
1 -2 3 
2 2 2 
3 2 3 

*/
