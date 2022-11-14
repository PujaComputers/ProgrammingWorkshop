#include<stdio.h>
int main()
{
    int arr[5]={10,2,3,40,5};
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
        sum=sum+arr[i];
    }
    printf(" Sum Of Array:%d\n",sum);
    printf("\n");
    return 0;
}

