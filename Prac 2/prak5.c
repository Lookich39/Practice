#include <stdio.h>
#define a 10
#define b 10
int main()
{
    int A[a][b], B[a][b];
    int n, k;

    scanf("%d %d", &n, &k);
    if ( (n>10) || (k>10) ){
        printf("%s", "Incorrect array size!");
        return 0;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<k; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int j=0; j<n; j++){
        for (int i=0; i<k; i++){
                B[i][j] = A[j][i];
        }
    }
    for (int i=0; i<k; i++){
        for (int j=0; j<n; j++){
            printf("%2d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
