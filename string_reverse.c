#include<stdio.h>
int main()
{
    char str[10];
    int i,len=0;
    printf("Enter your name :");
    scanf("%s", str);
    
    while (str[len] !='\0')
    {
        len++;
    }

    printf("The reverse of the string is :");
    for( i= len-1; i>=0; i--)
    {
        printf(" %c",str[i]);     
    }

  return 0;
}