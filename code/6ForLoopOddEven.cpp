 #include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("this number is Even:%d\n",i);
        }
        else
        {
            printf("this Number is Odd:%d\n",i);
        }
    }
    return 0;
}

