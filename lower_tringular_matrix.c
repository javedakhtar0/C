#include <stdio.h>
int main()
{
    int size, i, j;
    printf("enter the length of array : ");
    scanf("%d", &size);
    int array[size][size];

    printf("enter the elements in array : ");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i >= j)
            {

                scanf("%d", &array[i][j]);
            }
            else{
                array[i][j]=0;
            }
        }
    }
    printf("array is : \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}