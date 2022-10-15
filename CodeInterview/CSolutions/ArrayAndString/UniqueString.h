

#include <cstring>
int UniqueString (char input[]);


inline int
UniqueString (char input[])
{
    int lookup[128];

    for (int i = 0; i < 128; i++)
    {
        lookup[i] = 0;
    }

    int SIZE = strlen (input);

    for (int i = 0; i < SIZE; i++)
    {
        int mark = input[i];

        if (lookup[mark] == 1)
        {
            return 0;
        }
        else
        {
            lookup[mark] = 1;
        }
    }

    return 1;

}
