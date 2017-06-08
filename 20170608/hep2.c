#include <stdio.h>

void imprime (double** matriz, int m, int n){
    int i, j;
    for (i=0; i<m; i++){
        for (j=0;j<n; j++){
            printf ("%lf\t", matriz[i][j]);
        }
        printf ("\n");
    }
}

void transposta (double** matriz, int m, int n){
    int i, j;
    double aux;
    for (i=0; i<m; i++){
        for (j=i;j<n; j++){
            aux=matriz[i][j];
            matriz[i][j]=matriz[j][i];
            matriz[j][i]=aux;
        }
    }
}

main (){
    int a, b, c, d, i, j, m, n;
    double **A;
    printf ("digite a ordem da sua matriz: ");
    scanf ("%d %d", &m, &n);
    printf ("digite os elementos da matriz\n");
    A=(double *)calloc (m, sizeof (double*));
    for (i=0; i<n; i++){
        A[i]=(double *)calloc (n, sizeof (double));
        for (j=0; j<n; j++){
            printf ("digite o elemento (%d,%d)", i, j);
            scanf ("%lf", &A[i][j]);
        }
    }
    imprime(A, m, n);
    transposta(A, m, n);
    printf ("matriz transposta")
    imprime(A, m, n);
    for(i = 0; i < m; i++){
        free(A[i]);
    }
    free(A);

}
