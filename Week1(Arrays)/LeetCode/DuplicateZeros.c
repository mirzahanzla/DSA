/*
Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

Example 1:
Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

Example 2:
Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]
*/

#include <stdio.h>

int main(void)
{
    int arr[] = {1,0,2,3,0,0,5,0,2,0,4};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            for(int j = size-1; j > i+1; j--){
                arr[j] = arr[j-1];
            }
            arr[i+1] = 0;
            i++;
        }
        
    }

    for(int i = 0; i < size; i++){
        printf("Array at position %d: %d\n", i+1, arr[i]);
    }

    return 0;
}
