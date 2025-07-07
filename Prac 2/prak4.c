#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    int A[n];
    for (int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for (int i=0; i<(n/2); i++){
        a = A[i];
        A[i] = A[n-1-i];
        A[n-1-i] = a;
    }
    for (int i=0; i<n; i++){
        printf("%d ", A[i]);
        }
    return 0;
}
