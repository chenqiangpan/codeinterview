#pragma once
#include <cstdio>
#include <cstring>
void MoreStringFunc_strncat();
void MoreStringFunc_strcpy();

void MoreStringFunc_strncat()
{
    char name1[] = "abc";
    char name2[] = "def";


    for (int i = 0; i < 4; i++)
    {
        //3
        printf("Address for %c is %p\n", name1[i], &name1[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        //3
        printf("Address for %c is %p\n", name2[i], &name2[i]);
    }

    strncat(name1, name2, 3);
    printf("\n\n");
    puts(name1);
    puts(name2);

    printf("\n\n");

    for (int i = 0; i < 4; i++)
    {
        //3
        printf("Address for %c is %p\n", name1[i], &name1[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        //3
        printf("Address for %c is %p\n", name2[i], &name2[i]);
    }
}


void MoreStringFunc_strcpy()
{
    char name1[4] = "abc";
    char name2[4] = "def";


    for (int i = 0; i < 4; i++)
    {
        //3
        printf("Address for %c is %p\n", name1[i], &name1[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 4; i++)
    {
        //3
        printf("Address for %c is %p\n", name2[i], &name2[i]);
    }


    printf("%d \n\n", strcmp(name1, name2));
    puts(name1);
    puts(name2);

    printf("\n\n");

    for (int i = 0; i < 4; i++)
    {
        //3
        printf("Address for %c is %p\n", name1[i], &name1[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 4; i++)
    {
        //3
        printf("Address for %c is %p\n", name2[i], &name2[i]);
    }
}


void MoreStringFunc_strchr() //Returns pointer to first occurrence of char in str1
{
    char name1[7] = "abcdef";
    char myChar = 'c';
    char* charP;

    charP = strchr(name1, myChar);


    for (int i = 0; i < 8; i++)
    {
        //3
        printf("Address for %c is %p\n", name1[i], &name1[i]);
    }
    printf("\n\n");

    printf("start from %c, is  %s", myChar, charP);
}

void MoreStringFunc_strrchr() //last occurrence of given character in a string is found
{
    char name1[20] = "abcdefcxy";
    char myChar = 'c';
    char* charP;

    charP = strrchr(name1, myChar);


    for (int i = 0; i < 15; i++)
    {
        //3
        printf("Address for %c is %p\n", name1[i], &name1[i]);
    }
    printf("\n\n");

    printf("start from %c, is  %s", myChar, charP);
}


void MoreStringFunc_strstr() //Returns pointer to first occurrence of str2 in str1
{
    char name1[20] = "abcdeefcxydefg";
    char name2[10] = "def";
    char* charP;

    charP = strstr(name1, name2);


    for (int i = 0; i < 16; i++)
    {
        //3
        printf("Address for %c is %p\n", name1[i], &name1[i]);
    }
    printf("\n\n");

    printf("%s starts at  %s", name2, charP);
}


void MoreStringFunc_strdup() //Duplicates the string
{
    char name1[20] = "abcdefefcxydefg";
    char name2[10] = "def";
    char* charP;

    charP = _strdup(name1);


    for (int i = 0; i < 16; i++)
    {
        //3
        printf("Address for %c is %p\n", name1[i], &name1[i]);
    }
    printf("\n\n");

    printf("%s starts at  %s", name2, charP);
}

void UpdateString()
{
    char name[] = "chenqiangpan";
    name[0] = '?';
    puts(name);
}
