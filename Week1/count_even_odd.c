#include <stdio.h>
#define SIZE 10

int main(void)
{
    int arr[SIZE];
    int countEven = 0, countOdd = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }

    }

    printf("Number of Odd no.: %d\n", countOdd);
    printf("Number of even no.: %d", countEven);

    return 0;
}
