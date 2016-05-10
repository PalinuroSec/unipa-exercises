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

#include <stdio.h>
#define N 10

int main()
{
  int a[N]= {4, 5, 3, 9, 9, 5, 2, 4, 2};
  int i, j, swap;

  for(i = 0; i <= N -2; i++)
    {
      for(j = i+1; j <= N-1; j++)
	{
	  if(a[i] > a[j])
	    {
	      swap = a[i];
	      a[i] = a[j];
	      a[j] = swap;
	    }
	}
    }
  for(i = 0; i < N; i++)
    {
      printf("%3d", a[i]);
    }
  printf("\n");
  return 0;
}
