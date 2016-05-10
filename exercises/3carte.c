/*
 * 
 * Copyright 2016 Lorenzo "Palinuro" Faletra  <palinuro@frozenbox.org>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
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
