#include<stdio.h>
int main()
{
    int a,b,c;
    printf("input two integer number.\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d\n",c);
    if(c>0)
    {
        printf("sum %d + %d =%d\n",a,b,a+b);
        printf("Positive Number.\n");
    }
    else
    {
        printf("sum %d + %d =%d\n",a,b,a+b);
        printf("Negative Number.\n");
    }
    return 0;
}

