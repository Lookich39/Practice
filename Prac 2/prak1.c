#include <stdio.h>
#define a 10
#define b 10
int main()
{
    double A[a][b], summ;
    int n, k;

    scanf("%d %d", &n, &k);
    if ( (n>10) || (k>10) ){
        printf("%s", "Incorrect array size!");
        return 0;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<k; j++){
            scanf("%lf ", &A[i][j]);
            summ = summ + A[i][j];
        }
    }
    for (int j=0; j<k; j++){
        summ = 0;
        for (int i=0; i<n; i++){
            summ = summ + A[i][j];
        }
        A[n][j] = summ/n;
    }
    for (int i=0; i<=n; i++){
        for (int j=0; j<k; j++){
            printf("%3.2lf \t", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
