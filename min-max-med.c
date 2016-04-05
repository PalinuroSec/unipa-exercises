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

// prototypes
float minf(int dim, float *series);
float maxf(int dim, float *series);
float avgf(int dim, float *series);
int loadvect(float vect[], int dim);

// det main
int main()
{
  float vect[N], minv, maxv, avgv;
  loadvect(N, vect);
  minv = minf(N, vect);
  maxv = maxf(N, vect);
  avgv = avgf(N, vect);
  printf("min: %f\nmax: %f\navg: %f\n", minv, maxv, avgv);
  return 0;
}



// take inputs
// it was suggested by our professor
// as a quick alternative to
// malloc + files handling + shell parameters etc
int loadvect(int dim, float v[])
{
  int i;
  int check;
  for(i=0;i<dim;i++)
    {
      check=scanf("%f", &v[i]);
      if (check<1)
	break;
    }
  return i;
}

// take a series of numbers
// returns the minimum 
float minf(int i, float *series)
{
  int k;
  float minvalue = series[0];
  for(k=0; k<i;k++)
    {
      if(series[k] < minvalue)
	{
	  minvalue = series[k];
	}
    }
  return minvalue;
}

// take a series of numbers
// returns the maximum
float maxf(int dim, float *series)
{
  int k;
  float maxvalue = series[0];
  for(k=0; k<dim;k++)
    {
      if(series[k] > maxvalue)
        {
          maxvalue = series[k];
        }
    }
  return maxvalue;
}

// take a series of numbers
// returns the average value
float avgf(int dim,float *series)
{
  int k=0;
  float avgvalue = series[k];
  for(k; k<dim;k++)
    {
      avgvalue += series[k];
    }
  avgvalue /= k; 
  return avgvalue;
}
