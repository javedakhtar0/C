#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,sum,per;
    printf("enter the five subject number:");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);

    sum=sub1+sub2+sub3+sub4+sub5;
    per=(sum/500)*100;
    printf("percentage=%f\n",per);

    if (per>=90)
    {
        printf("grade A+");

        /* code */
    }
    else{
        if (per>=80)
        {
            /* code */printf("grade A");
        }
        else{
            if (per>=70)
            {
                /* code */printf("grade B+");
            }
            else{
                if (per>=60)
                {
                    /* code */printf("grade B");
                }
                else
                {
                    if (per>=50)
                    {
                        printf("grade C");
                    }
                    else{
                        printf("fail");
                    }
                    
                }
                
            }
            
        }
        
    }
    
}