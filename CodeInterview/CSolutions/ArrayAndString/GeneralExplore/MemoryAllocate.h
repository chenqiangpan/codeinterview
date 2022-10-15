#pragma once
#include <cstdio>
#include <cstdlib>
void MemoryAllocate();

inline void MemoryAllocate_malloc()
{
    int* ptr;
    int n, i;

    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("entered number is : %d\n", n);

    ptr = (int*)malloc(n * sizeof(int));

    // if memory cannot be allocated
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");


        printf("Address for prt is %p\n", &ptr);
        printf("Address for prt -> memory on heap is %p\n", ptr);


        for (i = 0; i < n; ++i)
        {
            *(ptr + i) = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: \n");
        for (int i = 0; i < n; i++)
        {
            //3
            printf("Address for %d is %p\n", ptr[i], &ptr[i]);
        }
    }

    free(ptr);
}

void MemoryAllocate_calloc()
{
    int* ptr;
    int n, i;

    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("entered number is : %d\n", n);

    ptr = (int*)calloc(n, sizeof(int));

    // if memory cannot be allocated
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");


        printf("Address for prt is %p\n", &ptr);

        printf("Address for prt-> base memory is %p\n", ptr);


        // Get the elements of the array
        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: \n");
        for (int i = 0; i < n; i++)
        {
            //3
            printf("Address for %d is %p\n", ptr[i], &ptr[i]);
        }
    }

    free(ptr);
}
