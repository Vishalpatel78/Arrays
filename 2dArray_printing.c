#include<stdio.h>
int main()
{
    int arr[3] [4];
    int i,j;
    for( i=0; i<3; i++)
    {
        for( j=0; j<4; j++)
        {
            printf("Enter numbers");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for( j=0; j<4; j++)
        {
            printf("%d",arr[i][j]);
        }
          printf("\n");
    }
   
    return 0;
}