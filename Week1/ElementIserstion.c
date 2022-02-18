#include <stdio.h>
#define SIZE 10

int main(void)
{
    int desiredNo;
    int desiredIndex;
    int temp;
    int temp1;

    int arr[SIZE] = {0,1,2,3,4,5,6,7,8};

    for (int i = 0; i < SIZE; i++)
    {
        printf("Elements before insertion at index %d: %d\n", i,arr[i]);
    }

    printf("Enter the number you want to insert: ");
    scanf("%d", &desiredNo);

    printf("Enter the index to insert there: ");
    scanf("%d", &desiredIndex);

    for (int i = 0; i < SIZE; i++)
    {
        if (i == desiredIndex)
        {
            temp = arr[i];
            arr[i] = desiredNo;
        }
        else if (i > desiredIndex)
        {
            temp1 = arr[i];
            arr[i] = temp;
            temp = temp1;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Element after insertion at index %d: %d\n", i,arr[i]);
    }
    
    return 0;
}