#include <stdio.h>
#define SIZE 10

int main(void)
{
    int arr[SIZE];
    int specificNo;
    int countSpecificNo = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &arr[i]);

    }

    printf("Enter the number to count: ");
    scanf("%d", &specificNo);

    for (int i = 0; i < SIZE; i++) {
        if(specificNo == arr[i]){
            countSpecificNo++;
        }
    }

    printf("Number %d is %d times", specificNo, countSpecificNo);

    return 0;
}

