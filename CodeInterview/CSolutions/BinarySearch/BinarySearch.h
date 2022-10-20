#pragma once
#include <math.h>
int BinarySearch(int nums[]);


int BinarySearch(int target)
{

    int myNum[] = {1,4,5,6,8,9,12,45,65,78};
    int min = 0;
    int max = (sizeof  myNum / sizeof * myNum)-1;

    while(max>=min)
    {
        int guess = floor((max + min) /2);

        if (target==myNum[guess])
        {
            return  guess;
        }
        if(myNum[guess] <target )
        {
            min = guess+1;
        }
        else 
        {
            max = guess -1;
        }

        guess = (max + min) /2;
    }

    return -1;
}
