#include<stdio.h>
int main()
{
    int arr[3][4];
    int i,j;
    int sum=0;
    float avg=0;

    for( i=0; i<3; i++)
    {
        for( j=0; j<4; j++)
        {
            printf("Enter your numbers");
            scanf("%d",&arr[i][j]);
             sum= sum+arr[i][j];
        }
    }

   
    avg =sum/(i*j);
    printf("Sum is %d",sum);
    printf("Avg is %f",avg);

    return 0;

}