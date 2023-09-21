#include<stdio.h>
int main()
{
  int a,b,sum;
  printf("enter the first amount:");
  scanf("%d",&a);

  printf("enter the second amount:");
  scanf("%d",&b);

  sum=a+b;
  printf("total amount = %d",sum);

  if (sum<=100)
  {
    printf("\nless amount");}

    else{
      if(sum<=200)
      {
        printf("\nenough amount");
      }
      else{
      printf("\nover amount");}
  
    }
    printf("\nnow can you start your party");
}