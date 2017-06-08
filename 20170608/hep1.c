#include <stdio.h>

float media (float *A, int t){
    float soma=0;
    int i;
    for (i=0; i<t; i++){
        soma+=A[i];
    }
    return ((float)soma/t);
}

float desvio1 (float *A, float m, int t){
    float soma=0;
    int i;
    for(i=0; i<t; i++){
        soma +=(pow((A[i]-m), 2));
        //printf ("dentro do desvio1 soma=%f\n", soma);
    }
    return (sqrt ((1.0/(t-1))*soma));
}

float desvio2 (float *A, float m, int t){
    float soma=0;
    int i;
    for(i=0; i<t; i++){
        soma +=(pow((A[i]-m), 2));
        //printf ("dentro do desvio2 soma=%f\n", soma);
    }
    return (sqrt ((1.0/t)*soma));
}

main (){
    int a, b, c, d, i, j;
    float *A;
    float B, C;
    printf ("digite quantos numeros: ");
    scanf ("%d", &a);
    A=(float*)calloc (a, sizeof(float));
    for (i=0; i<a; i++){
        printf ("\nDigite o #%d numero: ", i);
        scanf ("%f",&A[i]);
    }
    B=media (A, a);
    printf ("A media dos %d numeors eh %f\nO desvio padrao amostral eh %f\nO desvio padrao populacional eh %f\n",a, B, desvio1(A, B, a), desvio2(A, B, a));
}
