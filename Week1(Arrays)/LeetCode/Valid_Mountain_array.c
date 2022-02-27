/*
Given an array of integers arr, return true if and only if it is a valid mountain array.
Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Example 1:
Input: arr = [2,1]
Output: false

Example 2:
Input: arr = [3,5,5]
Output: false

Example 3:
Input: arr = [0,3,2,1]
Output: true
*/

#include <stdio.h>
#include <stdbool.h>

bool validMountainArray(int* arr, int arrSize);

int main(void) {
    int arr[] = {0,1,2,1,2};
    int size = sizeof(arr) / sizeof(int);
    bool mountain = validMountainArray(arr, size);

    mountain ? printf("True"): printf("False");

    return 0;
}

bool validMountainArray(int* arr, int arrSize) {
    bool peak = false;

    if(arrSize < 3) { // test case [1,2,3] why it is used
        return false;
    }
    if(arr[0] > arr[1]){ // test case [9,8,7,6,5,4,3,2,1,0] why it is used
        return false;
    }

    for (int i = 0; i < arrSize - 1; i++) {
        if (arr[i] == arr[i+1]) {
            return false;
        }
        if (arr[i+1] - arr[i] < 0) {   // transition where arr[i] > arr[i+1]
            peak = true;
        }else if (peak && arr[i+1] - arr[i] > 0) {  // if at falling side a greater number appears
            return false;
        }
    }
    return peak;
}
