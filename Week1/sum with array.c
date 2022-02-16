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

    printf("Sum = %d", sum);

    return 0;

}
