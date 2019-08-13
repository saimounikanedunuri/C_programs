// Write a C program to sort a 1D array using pointer by applying Bubble sort technique.
#include<stdio.h>
void sort(int *a, int n);
int main()
{
    int array[20];
    int n,i;
    
    scanf("%d",&n); //Number of elements to sort is taken from test cases
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]); //unsorted array elements are accepted from test case 
    }
   
    sort(array,n); //You have to write the sort function

    printf("The Sorted ARRAY is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
   return 0;
}
void sort(int *a, int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
           if(*(a+j)>=*(a+j+1))
        {
            temp = *(a+j);
            *(a+j)= *(a+j+1);
            *(a+j+1)= temp;
        }
        }
    }
}
/*output:
5//n
45
34
67
23
89
The Sorted ARRAY is:
23
34
45
67
89

*/
