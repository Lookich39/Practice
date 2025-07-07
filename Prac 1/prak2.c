#include <stdio.h>
int main(void)
{
    float A1, B1, C1, A2, B2, C2, x, y;
    scanf("%f %f %f %f %f %f", &A1, &B1, &C1, &A2, &B2, &C2);

    x = -((C1*B2-C2*B1)/(A1*B2-A2*B1));
    y = -((A1*C2-A2*C1)/(A1*B2-A2*B1));

    printf("%f %f", x, y);
    // Ax +By + C = 0
    return 0;
}
