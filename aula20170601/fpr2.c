#include <stdio.h>

int func (int * A, int *B, int *C, int t, int T){
    int i, j, k=0;
    for (i=0; i<t; i++){
        for (j=0; j<T; j++){
            if (A[i]==B[j]){
                C[k]=A[i];
                k++;
            }
        }
    }
    return k;
}

main (){
    int a[100], b[100], c[100], n, m, t, i;
    printf ("digite o tamnho do vetor a: ");
    scanf ("%d", &n);
    printf ("digite os valores de a\n");
    for (i=0; i<n; i++){
        scanf ("%d", &a[i]);
    }
    printf ("\ndigite o tamnho do vetor b: ");
    scanf ("%d", &m);
    printf ("digite os valores de b\n");
    for (i=0; i<m; i++){
        scanf ("%d", &b[i]);
    }
    t=func(a, b, c, n, m);
    for (i=0; i<t; i++){
        printf ("%d ", c[i]);
    }
}

