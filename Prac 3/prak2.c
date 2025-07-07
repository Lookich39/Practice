#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2){
    double s;
    s = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return s;
}

int main(void){
    printf("%lf", dist(0, 0, 4, 3));
    return 0;
}
