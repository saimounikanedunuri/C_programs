// Write a C program to store n elements using Dynamic Memory Allocation - calloc() and find the Largest element.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float *element;

    scanf("%d", &n); 
element = (float*) calloc(n, sizeof(float));

    if(element == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    // Stores the number entered by the user.
    int i;
    for(i = 0; i < n; ++i)
    {
        scanf("%f", element + i);
    }

 // find the largest
    for(i = 1; i < n; ++i)
    {
       if(*element < *(element + i))
         *element = *(element + i);
    }

    printf("Largest element = %.2f\n", *element);

    return 0;
}
/*output:
3//n
100
50
150
Largest element = 150.00
*/
