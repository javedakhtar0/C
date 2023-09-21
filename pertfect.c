#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0){
        sum=sum+i;}
    }
    if(sum==num)
    {
        printf(" %d is perfect number",num);

    }
    else{
        printf("%d is not perfect nnumber",num);
    }


}