#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers:\n");
    scanf("%d \n%d",&a,&b);
    if (a<b)
    {
        printf("%d is greater number\n",b);
    }
    else
    {
        printf("%d is greater number\n",a);
    }
    
}