#include<stdio.h>
int main()
{
    char str[10];
    int i;
    int length=0;

    printf("Enter name");
    scanf("%s",str);
    
    for( i=0; str[i]!='\0'; i++)
     length = length +1;
    
    printf("length is %d", length);
    return 0;

 }