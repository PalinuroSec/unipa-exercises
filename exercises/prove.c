#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  while(1)
    {
      while(scanf("%d", &n) != 1)
	{
	  while(getchar() != '\n');
	  printf("insert input\n");
	}
    }
  return 0;
}
