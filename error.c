#include<stdio.h>
int main()
{
    int num,fact=1,i;
    printf("enter the nunmber:");
    scanf("%d",&num);
    //show error if the user enter the negative number
    if(num<0)
    {
        printf("negative number does not exist");
    }
    else{
    
         for ( i = 1; i <= num; ++i)
      {
        fact=fact*i;
      }
    
    printf("factorial=%d",fact);
    }
}
