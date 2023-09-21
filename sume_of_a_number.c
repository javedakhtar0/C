#include<stdio.h>
int main()
{
    int num,sum=0,rem,count=10,i;
    printf("enter the number=");
    scanf("%d",&num);
    for ( i = 0; i < count; i++)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
        printf("sume of all digits=%d",sum);
}