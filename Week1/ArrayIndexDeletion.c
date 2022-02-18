#include <stdio.h>
#define SIZE 10

int main(void)
{
    int desiredIndex;
    int arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < SIZE; i++)
    {
        printf("Elements before insertion at index %d: %d\n", i,arr[i]);
    }

    printf("\nEnter the index to insert there: ");
    scanf("%d", &desiredIndex);

    for (int i = desiredIndex; i < SIZE; i++)
    {
        arr[i]= arr[i+1];
    }

    for (int i = 0; i < (SIZE-1); i++)
    {
        printf("Element after insertion at index %d: %d\n", i,arr[i]);
    }
    
    return 0;
}