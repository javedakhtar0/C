#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

// Simple deque structure for holding indices
int deque[MAX];
int front = 0, rear = -1;

// Add to rear
void push_back(int index)
{
    deque[++rear] = index;

}

// Remove from front
void pop_front()
{
    front++;
}

// Remove from rear
void pop_back()
{
    rear--;
}

// Get front
int get_front()
{
    return deque[front];
}

// Check if deque is empty
int is_empty()
{
    return front > rear;
}

void slidingWindowMax(int *arr, int n, int k)
{
    front = 0;
    rear = -1;

    for (int i = 0; i < n; i++)
    {
        // Remove elements that are out of this window
        if (!is_empty() && get_front() <= i - k)
        {
            pop_front();
        }

        // Remove smaller elements from the back
        while (!is_empty() && arr[deque[rear]] < arr[i])
        {
            pop_back();
        }

        push_back(i);

        // Print max of current window
        if (i >= k - 1)
        {
            printf("%d ", arr[get_front()]);
        }
    }

    printf("\n");
}

int main()
{
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sliding window maximums:\n");
    slidingWindowMax(arr, n, k);

    return 0;
}
