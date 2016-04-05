/*
gioco delle 3 carte
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int position, x;
  srand(time(NULL));

  while(x != 0)
    {
      position = rand()%3+1;
      printf("gioco delle 3 carte\n\n");
      printf("indovina dove si trova la carta vincente ([0] per uscire)\n");
      printf("indica il tuo numero vincente [1] [2] [3] -> ");
      scanf("%d", &x);
      if (x == position)
	{
	  printf("hai indovinato!\n");
	  getchar();
	}
      else if(x == 0)
	{
	  break;
	}
      else
	{
	  printf("hai perso, la carta vincente era la %d\n", position);
	  getchar();
	}
    }
  return 0;
}
