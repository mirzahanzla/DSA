/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
*/

#include <stdio.h>
#include <math.h>

void sortArray(int nums[], int size);

int main(void)
{
    int nums[] = {-4,-1,0,3,10};
    int size = sizeof(nums) / sizeof(int);

    for (int i = 0; i < size; i++) {
        nums[i] = pow(nums[i],2);
        
    }
    sortArray(nums, size);

    for (int i = 0; i < size; i++) {
        printf("value at position  after sorting and squaring %d: %d\n", i, nums[i]);
    }

    return 0;
}

void sortArray(int nums[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < (size - i - 1); j++) {
            if (nums[j] > nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    } 
}   