#pragma once
#include <cstdio>
#include <ctime>

void PointerJumpToIndex ();


void PointerJumpToIndex ()
{
  char name[5000] = { 'a', 'b', 'c', 'd', 'e' };
  char *ptr;
  ptr = name;

  printf ("%p\n", ptr);


  clock_t tic1 = clock ();
  /* here, do your time-consuming job */
  for (int i = 0; i < 5000; i++)
    {
      //3
      printf ("value for index %d is %c\n", i, *ptr + i);
    }

  clock_t toc1 = clock ();


  clock_t tic2 = clock ();
  /* here, do your time-consuming job */
  for (int i = 0; i < 5000; i++)
    {
      //3
      printf ("value for index %d is %c\n", i, name[i]);
    }

  clock_t toc2 = clock ();




  printf ("Pointer jumping, Elapsed: %f seconds\n",
	  (double) (toc1 - tic1) / CLOCKS_PER_SEC);
  printf ("Indexing, Elapsed: %f seconds\n",
	  (double) (toc2 - tic2) / CLOCKS_PER_SEC);
}
