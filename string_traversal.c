#include<stdio.h>
int main()
{
    char str[10];
    int i;
    
    printf("Enter your name");
    scanf("%s",str);

    for( i=0; str[i]!="\0"; i++)
    {
        printf("%c",str[i]);
        printf("\n");
    
    }
    return 0;
}