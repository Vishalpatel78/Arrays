/* write a programe to accept string (name) from the user and store them into a 2d character array 
and print the length of each name using appropriate string function */

#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][10];
    int i,x=0; 

    for ( i=0; i<5; i++)
    {
        printf("Enter Name:");
        scanf("%s",name[i]);
    }
    for ( i=0; i<5; i++)
{
    x=strlen(name[i]);
    printf("\n Name is %s Length is %d",name[i],x);
}
return 0;

}