#include <stdio.h>
int main()
{
    int size, i, j;
    printf("enter the length of array : ");
    scanf("%d", &size);
    int array[size][size];
    int array1[size][size];
    int array2[size][size];

    printf("enter the elements in array : ");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {

            scanf("%d", &array[i][j]);
        }
    }
    printf("enter the elements in array1 : ");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {

            scanf("%d", &array1[i][j]);
        }
    }
    printf("first array is : \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("second array1 is  : \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", array1[i][j]);
        }
        printf("\n");
    }

    printf("addition of array and array1 is : \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            array2[i][j] = array[i][j] + array1[i][j];
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
