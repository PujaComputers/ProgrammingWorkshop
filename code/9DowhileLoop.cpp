#include<stdio.h>
int main()
{
    int a,b,c,n;
    do
    {
        printf("input 1 to Do While Loop and press 0 to end the program.\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:

                printf("this is Do While Loop.\n\n");
                break;
        }
    }
    while(n!=0);
    return 0;
}

