  #include<stdio.h>
  int main()
  {
    int num1,num2;
    printf("enter the first num1=");
    scanf("%d",&num1);
    printf("enter the second num2=");
    scanf("%d",&num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("num1=%d \nnum2=%d",num1,num2);
    


 
   
}