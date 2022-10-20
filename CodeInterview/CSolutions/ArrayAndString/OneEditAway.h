#pragma once
#include <cmath>

int OneEditAway(char* str1, char* str2)
{
    const int SIZE1 = strlen(str1);
    const int SIZE2 = strlen(str2);

    int SIZE_Move;

    if (SIZE1 < SIZE2) SIZE_Move = SIZE1;
    else SIZE_Move = SIZE2;

    const int diff = abs(SIZE1 - SIZE2);

    if (diff > 1) return 0;

    if (diff == 0) //only check replace 
    {
        int marker = 0;
        for (int i = 0; i < SIZE_Move; i++)
        {
            if (str1[i] != str2[i])
            {
                if (marker == 1) // if we found two differences
                {
                    return 0;
                }

                marker = 1;
            }
        }

        return 1;
    }

    if (diff == 1) // only check insert
    {
        int marker = 0;
        int i = 0; //indice of str1
        int j = 0; //indice of str2

        while (i < SIZE_Move)
        {
            if (str1[i] != str2[j])
            {
                j++;
                marker += 1;
            }
            else
            {
                i++;
                j++;
            }

            if (marker > 1) // if we found two differences
            {
                return 0;
            }
        }

        return 1;
    }
}
