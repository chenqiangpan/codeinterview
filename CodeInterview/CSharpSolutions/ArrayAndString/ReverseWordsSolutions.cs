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
        int markerA = SIZE - 1;
        int markerB = SIZE - 1;

        for (int i = SIZE - 1; i > -1; i--)
        {
            markerA = i;

            if (Char.IsWhiteSpace(InputString[i]))
            {
                for (int x = markerA; x < markerB; x++)
                {
                    reversedString[reversedStringIndex] = InputString[x + 1];

                    reversedStringIndex += 1;
                }

                if (markerB == SIZE - 1)
                {
                    reversedString[reversedStringIndex] = ' ';

                    reversedStringIndex += 1;
                }

                markerB = i;
            }

            if (i == 0)
            {
                for (int x = 0; x < markerB; x++)
                {
                    reversedString[reversedStringIndex] = InputString[x];

                    reversedStringIndex += 1;
                }
            }
        }


        return reversedString;
    }

    public static char[] ReverseWords_2(char[] InputString)
    {
        int start = 0, end = 0, length;

        length = InputString.Length;

        ReverseString(InputString, start, length - 1);

        while (end < length)
        {
            if (InputString[end] != ' ')
            {
                start = end;

                while (end < length && InputString[end] != ' ')
                {
                    end++;
                }

                end--;
                ReverseString(InputString, start, end);
            }

            end++;
        }

        return InputString;
    }

    static void ReverseString(char[] InputString, int start, int end)
    {
        char temp;

        while (end > start)
        {
            temp = InputString[start];
            InputString[start] = InputString[end];
            InputString[end] = temp;

            start++;
            end--;
        }
    }
}