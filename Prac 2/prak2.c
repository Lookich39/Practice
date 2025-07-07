#include <stdio.h>
#define a 16
int main()
{
    int n, k, A[a], summ=0;
    scanf("%d", &n);
    if (n>16){
        printf("%s", "Incorrect array size!");
        return 0;
    }
    for (int i=0; i<n; i++){
        scanf("%d", &A[i]);
        summ = summ + A[i];
        if (i == 0){
            k = A[i];
        }
    }
    if (k>n){
        printf("%s", "Incorrect position");
        return 0;
    }
    A[k-1] = summ;
    printf("Result:\n");
    for (int i=0; i<n; i++){
        printf("%d ", A[i]);
        }
    return 0;
}
