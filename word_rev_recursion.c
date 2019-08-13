//Write a C program to reverse a word using Recursion. Input to the program is a string that is to be taken from the user and output is reverse of the input word. Note that you have to use recursion.
#include <stdio.h>
#define MAX 100
char *reverse(char[]);

int main()
{
    char str[MAX], *rev;
    //printf("Enter a String: ");
    scanf("%s", str);
    rev = reverse(str); // function
    printf("The reversed string is : %s\n", rev);
    return 0;
}
char* reverse(char str[])
{
    static int i= 0;
    static char rev[MAX];
    if (*str)
    {
        reverse(str+1);
        rev[i++]= *str;
    }
    return rev;
}
/*output:
aidni
The reversed string is : india
*/
