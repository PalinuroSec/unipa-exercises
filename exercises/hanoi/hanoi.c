#include <stdio.h>
#include "hanoi.h"

void hanoi(int n,char p0, char p1, char p2)
{
  if(n==1)
    {
      printf("move from %c to %c\n", p0, p2);
    }
  else
    {
      hanoi(n-1,p0,p2,p1);
      hanoi(1,p0,p1,p2);
      hanoi(n-1,p1,p0,p2);
    }
}
