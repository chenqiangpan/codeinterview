#include <stdio.h>

#include "ArrayAndString/FirstNonRepeatChar.h"  // NOLINT(clang-diagnostic-pragma-pack)
#include "ArrayAndString/UniqueString.h"
#include "ArrayAndString/DeleteCharsInString.h"
#include "ArrayAndString/ReverseWords.h"
#include "ArrayAndString/OneEditAway.h"
#include "BinarySearch/BinarySearch.h"
#include "LinkedList/LinkedListTest.h"

int main()
{


    //first non repeat letter test
    //printf("found you, the first non repeat letter is : %c ",FirstNonRepeatChar_2(str));

    // unique string test
    /*char str[100];

    printf("input a string: ");
    scanf("%s", str);
    if (UniqueString(str) == 1)
    {
        printf("ALl char in the input string is unique");
    }
    else if (UniqueString(str) == 0)
    {
        printf("Chars in the input string is not all unique");
    }
    */

    // Delete char in string test
     /*char strA[100];
    char strB[100];
    printf("input the first string: ");
    scanf("%s", strA);
    
    printf("input the second string you want remove from the first one: ");
    scanf("%s", strB);


    printf(DeleteCharsInString(strA,strB));

    

    // Reverse words in a string
    char str[] = "my dad is a swan.";
    printf("%s", ReverseWords(str));

    

    // one edit away
    char str1[] = "abcd";
    char str2[] = "ccbcd";
    printf("%i", OneEditAway(str1,str2));
    */

    // Binary search
    // printf("%i",BinarySearch(8));

    // linked list test
    LinkedListTest_withTail();
}
