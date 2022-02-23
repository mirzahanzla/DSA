#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void indexInsertion(int arr[], int size);
void indexDeletion(int arr[], int size);
void startInsertion(int arr[], int size);
void printArray(int arr[], int size);
void endInsertion(int arr[], int size);

int main(void) {
    int arr[SIZE] = {0};
    int userDefinedSIZE;

    printf("Enter the array size to fill: ");
    scanf("%d", &userDefinedSIZE);

    while(userDefinedSIZE >= SIZE ) {
        printf("Again Enter the array size less than before: ");
        scanf("%d", &userDefinedSIZE);
    }

    for(int i = 0; i < userDefinedSIZE; i++) {
        printf("Enter element at index %d : ", i);
        scanf("%d", &arr[i]);
    }

    int choice; 

    printf("\n\nMenu\n");
    printf("1.Insertion at desired Index\n");
    printf("2.Insetion at first\n");
    printf("3.Insertion at last\n");
    printf("4.Deletion at desired Index\n");
    printf("5.Exit\n");

    printf("Enter the choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            indexInsertion(arr, userDefinedSIZE);
            break;

        case 2:
            startInsertion(arr, userDefinedSIZE);
            break;
        
        case 3: 
            endInsertion(arr, userDefinedSIZE);
            break;

        case 4:
            indexDeletion(arr, userDefinedSIZE);
            break;

        case 5:
            exit(0);
            break;

    }
    return 0;

}

void indexDeletion(int arr[], int size) {
    int userDefinedIndex;

    printf("Enter the index where you want to delete element(less than %d): ", size+1);
    scanf("%d", &userDefinedIndex);
    
    while(userDefinedIndex > size) {
        printf("Enter the index again less than %d: ", size + 1);
        scanf("%d", &userDefinedIndex);
    }
    
    for (int i = userDefinedIndex; i < SIZE; i++)
    {
        arr[i]= arr[i+1];
    }

    printArray(arr, size - 1);
}

void indexInsertion(int arr[], int size) {
    int userDefinedIndex, desiredNo;

    printf("Enter the index where you want to insert element(less than %d): ", size+1);
    scanf("%d", &userDefinedIndex);

    while(userDefinedIndex > size) {
        printf("Enter the index again less than %d: ", size + 1);
        scanf("%d", &userDefinedIndex);
    }

    printf("\nEnter the desiredElement: ");
    scanf("%d", &desiredNo);

    for (int i = size ; i > userDefinedIndex; i--) {
        arr[i] = arr[i-1];
    }
    arr[userDefinedIndex] = desiredNo;

    printArray(arr, size + 1);
}

void startInsertion(int arr[], int size) {
    int desiredNo;

    printf("\nEnter the desiredElement: ");
    scanf("%d", &desiredNo);

    for (int i = size ; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = desiredNo;

    printArray(arr, size + 1);
}

void endInsertion(int arr[], int size) {
    int desiredNo;

    printf("\nEnter the desiredElement: ");
    scanf("%d", &desiredNo);

    arr[size] = desiredNo;

    printArray(arr, size + 1);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++){
        printf("\nElement at the index %d :%d", i, arr[i]);
    }
}
