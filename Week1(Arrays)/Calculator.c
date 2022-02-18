#include <stdio.h>
#define SIZE 10

float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float getInput(void);

int main(void){
    int choice;
    float num1, num2;

    printf("\t\t\t\t\t\t Calculator\n");
    printf("\t 1. Add\n");
    printf("\t 2. Subtract\n");
    printf("\t 3. Multiply\n");
    printf("\t 4. Division\n");
    printf("\t 5. Exit\n");

    while(1){
        printf("\n\t Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter 1st Number: ");
                num1 = getInput();

                printf("Enter 2nd Number: ");
                num2 = getInput();

                printf("\nAddition: %.2f", add(num1, num2));
                break;

            case 2:
                printf("Enter 1st Number: ");
                num1 = getInput();

                printf("Enter 2nd Number: ");
                num2 = getInput();

                printf("\nSubtraction: %.2f", subtract(num1, num2));
                break;

            case 3:
                printf("Enter 1st Number: ");
                num1 = getInput();

                printf("Enter 2nd Number: ");
                num2 = getInput();

                printf("\nMultiplication: %.2f", multiply(num1, num2));
                break;

            case 4:
                printf("Enter 1st Number: ");
                num1 = getInput();

                printf("Enter 2nd Number: ");
                num2 = getInput();

                printf("\nDivision: %.2f", divide(num1, num2));
                break;

            case 5:
                printf("Exiting");
                return 0;

            default:
                printf("Invalid choice !! Try again \n");
                break;
        }
    }


    return 0;
}

float add(float num1, float num2)
{

    return num1 + num2 ;
}

float subtract(float num1, float num2){

    return num1 - num2 ;
}

float multiply(float num1, float num2){

    return num1 * num2 ;
}

float divide(float num1, float num2){

    return num1 / num2 ;
}

float getInput(void)
{
    float number;
    scanf("%f", &number);

    return number;
}
