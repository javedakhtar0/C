// sort array in decending order & find largest and smalest elements in array
#include <stdio.h>
int main()
{
    int size, i, j, temp;
    printf("enter the length of array : ");
    scanf("%d", &size);
    int array[size];

    printf("enter the elements in array :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("array in decending order :  ");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {

        printf(" %d ", array[i]);
    }
    printf("\nlargest element in array is : %d ",array[0]);
    printf("\nsmalest element in array is : %d ",array[size-1]);

}