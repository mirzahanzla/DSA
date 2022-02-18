#include <stdio.h>
#define SIZE 10

int findMaxConsecutiveOnes (int nums[], int numsSize);

int main(void)
{
    int nums[SIZE];

    //Initializaing array and validation that entered input must be 0 or 1.
    for (int i = 0; i < 10; i++ ) {
        printf("Input Number(0,1) only at postion %d: ", (i + 1));
        scanf("%d", &nums[i]);

        while (nums[i] > 1 || nums[i] < 0) {
            printf("\nInput only (1,0)at position %d: ", (i + 1));
            scanf("%d", &nums[i]);
        }
    }

    //storing max consecutive 1s in variable
    int maxConsecutiveNumber = findMaxConsecutiveOnes(nums, SIZE);

    printf("MAX Consecutive Ones: %d", maxConsecutiveNumber);
    
    return 0;
}

int findMaxConsecutiveOnes (int nums[], int numsSize)
{
    int countConsective = 0;
    int max = 0;

    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] == 0) {
            //algo to check if countConsective is higher than max or not it is then convert
            if (max < countConsective) {
                max = countConsective;
            }
            //As 0 comes so we will start counting from again
            countConsective = 0;

        } else if (i == (numsSize - 1)) 
        {
            if (nums[i] == 1) {
                ++countConsective;
            }

            if (max < countConsective) {
                max = countConsective;
            }

        } else {
            //count number of consective ones
            ++countConsective;
        }
    }

    return max;
}
