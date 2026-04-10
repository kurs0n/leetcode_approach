#include <stdio.h>

int max (int a, int b)
{
  if (a > b)
    return a;
  return b;
}

void print_hello (int count)
{
  for (int i = 0; i < count; i++)
    printf ("Hello World!\n");
}
