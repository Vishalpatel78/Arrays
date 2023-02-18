#include<stdio.h>
void main()
{
    int arr[10];
    int i, soe=0, sod=0;

    for( i=0; i<=9; i++)
    {
        printf("Enter your 10 digits");
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
           soe = soe + arr[i];
        
        else
           sod = sod + arr[i];     
    }

    printf("the sum of the even numbers is %d",soe);
    printf("\n the sum of the odd numbers is %d", sod);

}