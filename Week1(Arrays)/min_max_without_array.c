#include <stdio.h>
#define SIZE 10

int main(void){
    int number, min, max;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter a Number %d: ", i+1);
        scanf("%d", &number);

        if(i == 0){
            min = number;
            max = min;
        } else if(min > number) {
            min = number;
        }

        if(max < number){
            max = number;
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;

}


