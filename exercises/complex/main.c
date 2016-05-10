#include <stdio.h>
#include <math.h>
#include "complex.h"

int main(int argc, char **argv)
{
    double a,b,c;
    cmpx r0,r1;
    int ret;
    a=2.0;
    b=-3.0;
    c=8.0;
    ret = cal(a,b,c,&r0,&r1);
    //debug
    printf("return:%d\na:%lf\nb:%lf\nc:%lf\nr0.r:%lf\nr0.i:%lf\nr1.r:%lf\nr1.i:%lf\n",ret,a,b,c,r0.r,r0.i,r1.r,r1.i);

    return 0;
}
