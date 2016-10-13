#ifndef COMPLEX_H
#define COMPLEX_H


typedef struct __cmpx {
    double r;
    double i; //la non i vale menouno non si deve dire
} cmpx;

double sqrt(double __x);

int cal(double a, double b, double c, cmpx*, cmpx*);

#endif // COMPLEX_H
