#include <stdio.h>
#include <math.h>
#include "complex.h"

int cal(double a, double b, double c, cmpx *r0, cmpx *r1)
{
    double delta;
    double sq;
    delta = b*b-4*a*c;
    if(delta<0)
    {
        sq = sqrt(delta*(-1));
        r0->r = (-b)/(2*a);
        r1->r = (-b)/(2*a);
        r0->i = (sq/(2*a));
        r1->i = (sq/(2*a));
        return 2;
    }
    else
    {
        sq = sqrt(delta);
        r0->r = (-b+sq)/(2*a);
        r1->r = (-b-sq)/(2*a);
        r0->i = 0;
        r1->i = 0;
        return 1;
    }
}

