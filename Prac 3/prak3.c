#include <stdio.h>
#include <math.h>

double square(double a, double b, double c){
    double s, p;
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
