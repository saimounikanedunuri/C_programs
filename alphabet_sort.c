// Write a C program to sort given names in ascending order (Alphabetical order). 
#include <stdio.h>
#include <string.h>
    int main()
    {
        char name[20][10], temp[10];
        int i, n;
 
        scanf("%d", &n); //Total no. of names is entered from test case
     
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]); //names are accepted from the test case
        
        }
int j; 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
printf("Names in Sorted order\n");
        for (i = 0; i < n; i++) 
        {
            printf("%s\n", name[i]);
        }

    }
/*output:
3//n
sai
mounika
nedunuri
Names in Sorted order
mounika
nedunuri
sai
*/
