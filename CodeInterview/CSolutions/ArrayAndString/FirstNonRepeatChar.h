#pragma once
#include <cstring>
char FirstNonRepeatChar (char input[]);
char FirstNonRepeatChar_2 (char input[]);

inline char
FirstNonRepeatChar (char input[])
{

  int SIZE = strlen (input);

  char *neddle_a;
  char *neddle_b;

  for (int i = 0; i < SIZE; i++)
    {

      neddle_a = strchr (input, input[i]);
      neddle_b = strrchr (input, input[i]);

      if (neddle_a == neddle_b)
	{
	  return input[i];
	}

    }

  return '?';

}


inline char
FirstNonRepeatChar_2 (char input[]) // issue, the lookup array doesn't count for the original order
{
  int SIZE = strlen (input);
  int lookup[128];

  for (int i = 0; i < 128; i++)
    {
      lookup[i] = 0;
    }


  for (int i = 0; i < SIZE; i++)
    {
      int mark = input[i];

      if (lookup[mark] == 0)
	{
	  lookup[mark] = 1;
	}
      else
	{
	  lookup[mark] += 1;
	}
    }
    
      for (int i = 0; i < 128; i++)
    {
      if(lookup[i] ==1)
      {
          char c = i;
          return c; // cast int to char
      }
    }


  return 0;
}
