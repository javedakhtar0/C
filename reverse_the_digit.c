#include<stdio.h>
int main()
{
    int n,revno=0,rem;
    printf("enter the numbers=");
    scanf("%d",&n);
    while (n!=0)

    {
        rem=n%10;
        revno=revno*10+rem;
        n=n/10;

    }
    printf("reversed number=%d\n",revno);
    
    
}