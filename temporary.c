#include<stdio.h>
int main()
{
    int cy,yoj,yos,bonus;
    printf("enter the curent year and year of joning:");
    scanf("\n%d \n%d",&cy,&yoj);
    yos=cy-yoj;
    if (yos>3)
    {
        bonus=2000;
        printf("bonus=RS. %d\n",bonus);
    }
    

    
}