#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 4

void imprime(float M[L][C]) {
    int i,j;
    for(i=0;i<L;i++) {
        for(j=0;j<C;j++) {
            printf("%g\t",M[i][j]);
        }
        printf("\n");
    }

}

float trans(float M[L][C]) {
    int i,j;
    for(j=0;j<C;j++) {
        for(i=0;i<L;i++) {
            printf("%g\t",M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz[L][C];
    int i,j;
    for(i=0;i<L;i++)
        for(j=0;j<C;j++) {
            printf("Entre com [%d][%d]: ",i,j);
            scanf("%f",&(matriz[i][j]));
        }
    imprime(matriz);
    printf("\nTransposta: \n");
    trans(matriz);
    return 0;
}
