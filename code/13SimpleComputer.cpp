#include<stdio.h>
int main()
{
    int a,b,c,n;
    do
    {
printf("input your choice and press 0 to       end  the program.\n");
printf("1.Addition \n2.Subtraction \n3.Multiplication .\n4.Division.\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("input 2 integer number.\n");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf("%d+%d=%d\n",a,b,c);
            break;
        case 2:
            printf("input 2 integer number.\n");
            scanf("%d %d",&a,&b);
            c=a-b;
            printf("%d-%d=%d\n",a,b,c);
            break;
        case 3:
            printf("input 2 integer number.\n");
            scanf("%d %d",&a,&b);
            c=a*b;
            printf("%d*%d=%d\n",a,b,c);
            break;
        case 4:
            printf("input 2 integer number.\n");
            scanf("%d %d",&a,&b);
            c=a/b;
            printf("%d/%d=%d\n",a,b,c);
            break;
        default:
            printf("please input correct value Or Check Again.\n");
        }


    }
    while(n!=0);
    return 0;
}

