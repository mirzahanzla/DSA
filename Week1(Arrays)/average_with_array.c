#include <stdio.h>
#define SIZE 10

int main(void){
    int number[SIZE];
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter a Number %d: ", i+1);
        scanf("%d", &number[i]);

        sum += number[i];
    }

    float average = sum / (float)SIZE;

    printf("Average = %.2f", average);

    return 0;
}
