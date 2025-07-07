#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    int A[n];
    for (int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    a = A[n-1];
    for (int i=n-1; i>0; i--){
        A[i] = A[i-1];
    }
    A[0] = a;
    for (int i=0; i<n; i++){
        printf("%d ", A[i]);
        }
    return 0;
}
