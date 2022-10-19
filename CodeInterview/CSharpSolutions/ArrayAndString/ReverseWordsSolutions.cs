using System;

namespace CodeInterview;

public class ReverseWordsSolutions
{
    public static char[] ReverseWords(char[] InputString)
    {
        int SIZE = InputString.Length;


        //build new string
        char[] reversedString = new char[SIZE];
        int reversedStringIndex = 0;

        //marker index
        int mark_index_A = SIZE-1;
        int mark_index_B = SIZE-1;


        for (int i = SIZE - 1; i > -1; i--) // reverse scan
        {
            mark_index_A = i;

            if (Char.IsWhiteSpace(InputString[i])) // we found a space and we are at the end of the original string, write into buffer directly
            {
                // then we copy the last word (must between mark i and mark j ) with its correct order, as from i to j
                for (int x = mark_index_A; x < mark_index_B; x++)
                {
                    reversedString[reversedStringIndex] = InputString[x + 1];

                    reversedStringIndex += 1;
                }

                if (mark_index_B == SIZE - 1)
                {
                    reversedString[reversedStringIndex] = ' ';

                    reversedStringIndex += 1;
                }
                mark_index_B = i;
            }

            if (i == 0)
            {
                for (int x = 0; x < mark_index_B; x++)
                {
                    reversedString[reversedStringIndex] = InputString[x];

                    reversedStringIndex += 1;
                }
            }
        }


        return reversedString;
    }
}