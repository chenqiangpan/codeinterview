#pragma once
#include <cstdio>
#include <cstring>
void ReverseString(char str[], int start, int end);
const char* ReverseWords(char str[]);

void ReverseString(char str[], int start, int end)
{
    char temp;
    while (end > start)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

const char* ReverseWords(char str[])
{
    int start = 0, end = 0, length;

    length = strlen(str);

    ReverseString(str, start, length - 1);

    while (end < length)
    {
        if (str[end] != ' ')
        {
            start = end;

            while (end < length && str[end] != ' ')
            {
                end++;
            }
            end--;
            ReverseString(str, start, end);
        }
        end++;
    }

    return str;
}
