
#include <stdio.h>
int main()
{
    int array[4][4], i, j, temp;
    printf("enter the elments in array : \t"); // get the elements in array
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("elements of array :\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0 ; j < 4; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}