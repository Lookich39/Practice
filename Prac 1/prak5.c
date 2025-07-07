#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float det (float a, float b, float c, float d) {
	return a * d - b * c;
}
int main(void)
{
    float Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, A1, B1, C1, A2, B2, C2, x, y;
    scanf("%f %f %f %f", &Ax, &Ay, &Bx, &By);
    scanf("%f %f %f %f", &Cx, &Cy, &Dx, &Dy);

    A1 = Ay-By;
    B1 = Bx-Ax;
    C1 = Ax*By-Bx*Ay;

    A2 = Cy-Dy;
    B2 = Dx-Cx;
    C2 = Cx*Dy-Dx*Cy;

    x = -((C1*B2-C2*B1)/(A1*B2-A2*B1));
    y = -((A1*C2-A2*C1)/(A1*B2-A2*B1));

    if ((det(A1, C1, A2, C2) == 0) && ((det(B1, C1, B2, C2) == 0))){
        printf("%d", 2);
        }
    else if ((A1*B2-A2*B1) == 0){
        printf("%d", 0);
    }
    else {
        printf("%d\n", 1);
        printf("%e %e", x, y);
    }
    return 0;
}
