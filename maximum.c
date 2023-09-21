#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);

    if (a>=b)
    {
        if(a>=c)
        {
            printf("a=%d is largest number",a);
        }
        else{
            printf("b=%d is largest number",b);
        }
        /* code */
    }
    else
    {
        if (b>=c)
        {
            printf("b=%d is largest number",b);
            /* code */
        }
        else{
            printf("c=%d is largest number",c);
        }
        
    }
    
}