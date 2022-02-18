#include <stdio.h>
#define SIZE 10

int main(void)
{
    int addNo;
    int desiredIndex;
    int temp;

    int arr[SIZE] = {0,1,2,3,4,5,6,7,8};

    for (int i = 0; i < SIZE; i++)
    {
        printf("Elements before insertion at index %d: %d\n", i, arr[i]);
    }

    printf("Enter the number you want to insert: ");
    scanf("%d", &addNo);

    printf("Enter the index to insert there: ");
    scanf("%d", &desiredIndex);

    for (; desiredIndex < SIZE; desiredIndex++)
    {
        temp = arr[desiredIndex];
        arr[desiredIndex] = addNo;
        addNo = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Element after insertion at index %d: %d\n", i, arr[i]);
    }
    
    return 0;
}