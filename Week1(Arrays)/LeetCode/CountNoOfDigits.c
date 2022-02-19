/*
Given an array nums of integers, return how many of them contain an even number of digits.

Example 1:
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

Example 2:
Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
*/


#include <stdio.h>

int noOfDigits(int nums);
int sizeOfNum(int num);

int main()
{
    int countDigits;
    int nums[] = {0,100000,1,34,1003};
    int size = sizeof(nums)/sizeof(int);

    for(int i = 0; i < size; i++){
        // countDigits = sizeOfNum(nums[i]);
        countDigits = noOfDigits(nums[i]);  

        if (countDigits % 2 == 0) {
            printf("%d contains %d digits (even number of digits).\n", nums[i], countDigits);
        } else {
            printf("%d contains %d digits (odd number of digits).\n", nums[i], countDigits);
        }
    }

    return 0;
}

int noOfDigits(int nums)
{
    int count = 0;
    
    if (nums == 0) {
        count = 1;
    } else {
        while(nums != 0){
            count++;
            nums /= 10;            
        }
    }  
    return count;
}



int sizeOfNum(int num)
{  
    int sizeOfNum = 0;
    int loopNum = 9;

    if (num == 0){
        return 1;
    } else {
        for(int i = 0; i <= 999999;){
            sizeOfNum++;

            if(num >= i+1 && num <= loopNum)
            {
                return sizeOfNum;
            }

            i = loopNum;
            loopNum = (loopNum * 10) + 9;
        }
    }

}