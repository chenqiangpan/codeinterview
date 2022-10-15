#pragma once
#include <cstring>
const char* DeleteCharsInString(char inputString[], char removeString[]);


inline const char* DeleteCharsInString(char inputString[], char removeString[])
{
    int lookUp[128];
    const int SIZE_INPUT = strlen(inputString);
    const int SIZE_REMOVE = strlen(removeString);

    for (int i = 0; i < 128; i++)
    {
        lookUp[i] = 0;
    }

    // build lookup ASCII for remove chars
    for (int i = 0; i < SIZE_REMOVE; i++)
    {
        lookUp[removeString[i]] = 1;
    }

    // build temp string
    char* tempString = new char[SIZE_INPUT];

    //set temp string index
    int temp_indice = 0;

    //scan input string
    for (int i = 0; i < SIZE_INPUT; i++)

    {
        if (lookUp[inputString[i]] == 0) //if the char is not a remove one
        {
            tempString[temp_indice] = inputString[i]; // copy to temp
            inputString[i] = '\0'; // null that char in input string
            inputString[temp_indice] = tempString[temp_indice]; // copy char back to input string with the temp's indice
            temp_indice++; //increase temp string index
        }

        else if (lookUp[inputString[i]] == 1) //if the char is a remove one
        {
            inputString[i] = '\0'; // null that char in input string
        }
    }

    return inputString;
}
