//i don't have time to finish this shit

#include <stdio.h>
#include <time.h>
#include <stdlib.h>





float* genmat(short int rows, short int cols)
{
    float** mat = (float**)malloc(cols * sizeof(float*));
    int col;
    for (int col=0; row < cols; ++cols)
    {
        mat[col] = (float*) calloc(rows * sizeof(float));
    }

    return mat;
}


int initmat(float ***m, unsigned short int i, unsigned short j)
{
    srand(time(NULL));
    register short unsigned int k;
    register short unsigned int l;

    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            m[k][l]=rand()*100;
        }
    }
}


int printmat(float ***m, unsigned short int i, unsigned short j)
{
    srand(time(NULL));
    register short unsigned int k;
    register short unsigned int l;

    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            m[k][l]=rand()*100;
        }
    }
}


int main(int argc, char *argv[])
{
    unsigned short int r,c;

    float m[][] = genmat(r,c);
    initmat(&m,r,c);
    printmat(&m,r,c);
}
