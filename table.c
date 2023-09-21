#include<stdio.h>
int main()
{
    int n,i,count=10,table;
    printf("enter the number:");
    scanf("%d",&n);
    for ( i = 1; i <=count; i++)
    {

        table=n*i;
        printf("\n%d",table);
    }
}
    
