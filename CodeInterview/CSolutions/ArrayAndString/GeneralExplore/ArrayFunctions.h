#pragma once
#include <cstring>
int size_of_array();
int CapacityOfArray();
const char* reverse(char* orig);
void print_reverse(); //int *orig, size_t ary_size);
int is_empty();
char return_value(int index);
const char* insert_at_index(int index, char c);
const char* prepend(char c);
const char* remove_array();
int find_value(char c);

inline int SizeOfArray()
{
    char name[] = "mydadada";
    //get capacity 
    int arrayCap = 0;
    arrayCap = (&name)[1] - name;


    int arraySize = 0;
    name[3] = '\0';

    for (int i = 0; i < arrayCap; i++)
    {
        if (name[i] != '\0')
            arraySize++;
    }

    return arraySize;
}

inline int CapacityOfArray()
{
    char name[] = "mydadada";
    int arrayCap = 0;
    arrayCap = (&name)[1] - name;
    return arrayCap;
}


inline int is_empty()
{
    char name[] = "";
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] != '\0')
            return 0;
    }
    return 1;
}

inline char return_value(int index)
{
    char name[] = "mydadada";
    if (index > strlen(name))
        return '?';
    else
        return name[index];
}

inline const char* insert_at_index(int index, char c)
{
    char name[] = "mydadada";
    char* name_ptr = name; // the pointer is pointing to the array
    int SIZE = strlen(name);
    for (int i = SIZE + 1; i > index; i --)
    {
        name[i] = name[i - 1];
    }
    name[index] = c;
    return name_ptr; // we return this pointer is return the string 
}

inline const char* prepend(char c)
{
    char name[] = "mydadada";
    char* name_ptr = name; // the pointer is pointing to the array
    int SIZE = strlen(name);
    for (int i = SIZE + 1; i > 0; i --)
    {
        name[i] = name[i - 1];
    }
    name[0] = c;
    return name_ptr; // we return this pointer is return the string 
}

inline const char* remove_array()
{
    char name[] = "mydadada";
    char* name_ptr = name; // the pointer is pointing to the array
    int SIZE = strlen(name);
    name[SIZE - 1] = '\0';
    return name_ptr; // we return this pointer is return the string 
}

inline int find_value(char c)
{
    char name[] = "mydadadav";

    int SIZE = strlen(name);
    for (int i = 0; i < SIZE; i ++)
    {
        if (name[i] == c)
            return i;
    }

    return -1;
}


inline const char* reverse(char* orig)
{
    size_t len = strlen(orig);
    char* rev = orig + len - 1;
    while (rev >= orig)
    {
        printf("%c", *rev);
        rev = rev - 1; // <= See below
    }
    return rev;
}


/*inline void print_reverse() //int *orig, size_t ary_size)
{
    char nums[] = "abcd";

    size_t ary_size = sizeof (nums) / sizeof (*nums);

    printf("%p, %lu \n", nums, ary_size);


    char nums2[ary_size];
    char* rev = nums + ary_size - 1;

    printf("%c, %p \n", *rev, rev);

    while (rev >= nums)
    {
        rev = rev - 1;

        nums2[rev - nums] = nums2[*rev];

        printf("here comes new array has %c", nums2[*rev]);
        printf("%c, %p \n", *rev, rev);
    }
}
*/
