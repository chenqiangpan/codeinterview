#pragma once
#include <cstdio>
#include <cstring>
void strcardig_1();
void strcardig_2();

void strcatdig_1()
{
   char name[3] = {'a','b','c'};
   char name2[3] = {'d','e','f'};
   
   
          for (int i = 0; i < 6; i++)
    {
        //3
        printf("Address for %c is %p\n", name[i], &name[i]);
    }
      printf("\n\n");
       for (int i = 0; i < 5; i++)
    {
        //3
        printf("Address for %c is %p\n", name2[i], &name2[i]);
    }

   strcat(name,name2);
   
   puts(name);
   puts(name2);
   
   

   printf("\n\n");
          for (int i = 0; i < 6; i++)
    {
        //3
        printf("Address for %c is %p\n", name[i], &name[i]);
    }
      printf("\n\n");
       for (int i = 0; i < 5; i++)
    {
        //3
        printf("Address for %c is %p\n", name2[i], &name2[i]);
    }
}


void strcatdig_2()
{
       char name[] = "abc";
   char name2[] = "def";
   
   
          for (int i = 0; i < 4; i++)
    {
        //3
        printf("Address for %c is %p\n", name[i], &name[i]);
    }
      printf("\n\n");
       for (int i = 0; i < 3; i++)
    {
        //3
        printf("Address for %c is %p\n", name2[i], &name2[i]);
    }

   strcat(name,name2);
   
   puts(name);
   puts(name2);
   
   

   printf("\n\n");
          for (int i = 0; i < 6; i++)
    {
        //3
        printf("Address for %c is %p\n", name[i], &name[i]);
    }
      printf("\n\n");
       for (int i = 0; i < 3; i++)
    {
        //3
        printf("Address for %c is %p\n", name2[i], &name2[i]);
    }
}
