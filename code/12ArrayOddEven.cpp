#include<stdio.h>
int main()
{
    int arr[5]={10,2,3,40,5};
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]%2==0)
        {
            printf("Even Number.\n");
        }
        else
        {
            printf("Odd Number.\n");
        }
    }
    printf("\n");

    return 0;
}

