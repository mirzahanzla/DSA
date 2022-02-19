#include <stdio.h>

int noOfDigits(int nums);
int sizeOfNum(int num);

int main()
{
    int countDigits;
    int nums[] = {120,100000,1,34,1003};
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
    
    while(nums != 0)
    {
        count++;
        nums /= 10;            
    }
        
    return count;
}



int sizeOfNum(int num)
{  
    int sizeOfNum = 0;
    int loopNum = 9;


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