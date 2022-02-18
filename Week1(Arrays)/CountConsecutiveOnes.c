#include <stdio.h>
#define SIZE 10

int findMaxConsecutiveOnes (int nums[], int numsSize);

int main(void)
{
    int nums[SIZE] = {1,0,1,0,1,0,1,1,0,0};

    int maxNumbers = findMaxConsecutiveOnes(nums, SIZE);

    printf("MAX Consecutive Ones: %d", maxNumbers);

}

int findMaxConsecutiveOnes (int nums[], int numsSize)
{
    int countConsective = 0;
    int max = 0;
    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] == 0) {
            if (max < countConsective) {
                max = countConsective;
            }
            countConsective = 0;
            continue;
        }else {
            countConsective++;
        }

    }

    return max;
}
