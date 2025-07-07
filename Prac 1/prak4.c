#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b) {
     return *(double*)a - *(double*)b;
}
double det (double a, double b, double c, double d) {
	return a * d - b * c;
}
int main(void)
{
    double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, A1, B1, C1, A2, B2, C2, x, y, len1, len2, len0;
    scanf("%lf %lf", &Ax, &Ay);
    scanf("%lf %lf", &Bx, &By);
    scanf("%lf %lf", &Cx, &Cy);
    scanf("%lf %lf", &Dx, &Dy);

    A1 = Ay-By;
    B1 = Bx-Ax;
    C1 = -A1*Ax-B1*Ay;


    A2 = Cy-Dy;
    B2 = Dx-Cx;
    C2 = -A2*Cx-B2*Cy;

    x = -((C1*B2-C2*B1)/(A1*B2-A2*B1));
    y = -((A1*C2-A2*C1)/(A1*B2-A2*B1));

    if ((det(A1, A2, C1, C2) == 0) && ((det(B1, B2, C1, C2) == 0))){
        double A[] = {Ax, Bx, Cx, Dx};
        double B[] = {Ay, By, Cy, Dy};
        qsort(A, 4, sizeof(double), cmp);
        qsort(B, 4, sizeof(double), cmp);

        len1 = pow(pow((Ax-Bx), 2)+pow((Ay-By), 2), 0.5);
        len2 = pow(pow((Cx-Dx), 2)+pow((Cy-Dy), 2), 0.5);
        len0 = pow(pow((A[0]-A[3]), 2)+pow((B[0]-B[3]), 2), 0.5);
        if ((len0) < (len1 + len2)){
            if (A[1]<A[2]){
            printf("%.10lf %.10lf\n", A[1], B[1]);
            printf("%.10lf %.10lf", A[2], B[2]);
            }
            else{
                if ((A[1] == A[2]) && (B[1] < B[2])){
                    printf("%.10lf %.10lf\n", A[1], B[1]);
                    printf("%.10lf %.10lf", A[2], B[2]);
                }
                else if ((A[1] == A[2]) && (B[1] > B[2])){
                    printf("%.10lf %.10lf\n", A[2], B[2]);
                    printf("%.10lf %.10lf", A[1], B[1]);
                }
                else {
                    printf("%.10lf %.10lf\n", A[2], B[2]);
                    printf("%.10lf %.10lf", A[1], B[1]);
                }
            }
        }
        else if ((len0) == (len1+len2)) {
            printf("%.10lf %.10lf", A[1], B[1]);
        }

        else {
            printf("%s", "Empty");
        }

        return 0;
    }



    if (((((x>=Ax && x<=Bx) || (x<=Ax && x>=Bx)) && ((y>=Ay && y<=By) || (y<=Ay && y>=By))) && (((x>=Ax && x<=Bx) || (x<=Ax && x>=Bx)) && ((y>=Ay && x<=By) || (y<=Ay && y>=By)))) &&
        ((((x>=Cx && x<=Dx) || (x<=Cx && x>=Dx)) && ((y>=Cy && y<=Dy) || (y<=Cy && y>=Dy))) && (((x>=Cx && x<=Dx) || (x<=Cx && x>=Dx)) && ((y>=Cy && x<=Dy) || (y<=Cy && y>=Dy))))){
            printf("%.10lf %.10lf", x, y);
        }

    else {
       printf("%s", "Empty");
    }

    return 0;
}
