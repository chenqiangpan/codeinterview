#pragma once
#include <cstdio>
#include <cstring>
const char* ReverseWords(char inputString[]);

const char* ReverseWords(char inputString[])
{
    const int SIZE = strlen(inputString);
    

    //build new string
    char reversedString[SIZE] ;
    int reversedStringIndex = 0;

    //marker index
    int mark_index_A = SIZE;
    int mark_index_B = SIZE;

    

    for (int i = SIZE; i > 0; i --) // reverse scan
    {
        if (inputString[i] == ' ') // we found a space and we are at the end of the original string, write into buffer directly
        {
            reversedString[reversedStringIndex] = inputString[i];
            reversedStringIndex+=1;

            if (mark_index_A!=mark_index_B)
            {
                
                // then we copy the last word (must between mark i and mark j ) with its correct order, as from i to j
                for (int x = mark_index_A + 1; x < mark_index_B; x ++)
                {
                    reversedString[reversedStringIndex] = inputString[mark_index_A+1] ;

                    reversedStringIndex+=1;
                }

                mark_index_B = i ;
            }
           
        }
        

        mark_index_A = i;
    }




    return  reversedString;
}
