#include <stdio.h>
#define SIZE 10

int main(void){
    int number[SIZE], min, max;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter a Number %d: ", i+1);
        scanf("%d", &number[i]);
    }

    min = number[0];
    max = min;

    for(int i = 0; i < SIZE; i++){
        if (min > number[i]) {
            min = number[i];
        }
        if(max < number[i]){
            max = number[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;

}

