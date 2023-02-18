 /*WAP to accept 5 names from the user ,store them in a 2d character array and again ask the __USER to input a name , mow search and print the position
of this name in 2d array*/

#include<stdio.h>
#include<string.h>

int main()
{
    char name[5][10];
    char temp[10];
    int i,x; 

    for ( i=0; i<5; i++)
    {
        printf("Enter Name:");
        scanf("%s",name[i]);
    }
    printf("Enter the comparatable name ");
    scanf("%s",temp);
    
    for( i=0; i<5; i++)
    {
        x = strcmp (name[i],temp);
        if(x==0)
        {
            printf("Name fond at position %d ",i+1);
            break;
        }
    }
    if(x!=0)
    {
        printf("Name not found");
    }
    return 0;
}
