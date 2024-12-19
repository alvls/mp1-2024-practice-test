#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int task3(char* s)
{
  int min = INT_MAX;
  int k = 0;

  for (int i = 0; i < strlen(s); i++)
  {
    if (s[i] == ' ')
    {
      if (k > 0 && min > k)
        min = k;
      k = 0;
    }
    else
    {
      k++;
    }
  }
  if (k > 0 && min > k)
    min = k;
  return ((min == INT_MAX) ? 0 : min) - 1;
}
