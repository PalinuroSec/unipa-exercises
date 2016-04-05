#include <stdio.h>

// prototypes
float minf(int dim, float *series);
float maxf(int dim, float *series);
float avgf(int dim, float *series);
int loadvect(float vect[], int dim);

// det main
int main()
{
  float vect[100], minv, maxv, avgv;
  loadvect(vect, 10);
  minv = minf(10, vect);
  maxv = maxf(10, vect);
  avgv = avgf(10, vect);
  printf("min: %f\nmax: %f\navg: %f\n", minv, maxv, avgv);
  return 0;
}



// take inputs
// it was suggested by our professor
// as a quick alternative to
// malloc + files handling + shell parameters etc

int loadvect(float v[], int dim)
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
