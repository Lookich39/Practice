#include <stdio.h>

int transp(int A[64][64], int m, int n){
    int B[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
                B[i][j] = A[j][i];
                A[j][i] = 0;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
                A[i][j] = B[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
                printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(void){
    int A[64][64]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 0, 1, 2}};
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
                printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    transp(3, 4, A);
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
                printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
