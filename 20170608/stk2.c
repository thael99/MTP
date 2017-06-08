#include <stdio.h>
#include <math.h>

#define n 5

float media (float *A){
    float soma=0;
    int i;
    for (i=0; i<n; i++){
        soma+=A[i];
    }
    return ((float)soma/n);
}

float desvio1 (float *A, float m){
    float soma=0;
    int i;
    for(i=0; i<n; i++){
        soma +=(pow((A[i]-m), 2));
        //printf ("dentro do desvio1 soma=%f\n", soma);
    }
    return (sqrt ((1.0/(n-1))*soma));
}

float desvio2 (float *A, float m){
    float soma=0;
    int i;
    for(i=0; i<n; i++){
        soma +=(pow((A[i]-m), 2));
        //printf ("dentro do desvio2 soma=%f\n", soma);
    }
    return (sqrt ((1.0/n)*soma));
}

main (){
    int a, b, c, d,i, j;
    float A[n], B, C;
    printf ("digite os 5 numros:\n");
    for (i=0; i<n; i++){
        scanf ("%f", &A[i]);
    }
    B=media (A);
    printf ("A media eh %g\nO desvio padrao da amostra eh %f\nO dsvio padrao populacional eh %f\n", B, desvio1(A, B), desvio2(A, B));

}
