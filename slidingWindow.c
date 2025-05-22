#include<stdio.h>

int* slideWindow(int* arr, int n, int k)
{
    int maxValue = 0, maxSlide = 0;
    int *ptr;
    ptr = &maxValue;

    // Fix: Start from 0, not k
    for(int i = 0; i < k; i++)
    {
        maxSlide = maxSlide + arr[i];
    }

    maxValue = maxSlide;

    for (int i = k; i < n; i++)
    {
        maxSlide = maxSlide + arr[i] - arr[i - k];
        if(maxSlide > maxValue){
            maxValue = maxSlide;
        }
    }

    return ptr;
}

void main()
{
    int a[] = {1, 3, 5, 2, 8, 1, 5};
    int k = 3;
    int n = sizeof(a) / sizeof(a[0]);
    int* result = slideWindow(a, n, k);
    printf("\nMaximum sum of subarray of size %d is %d\n", k, *result);
}
