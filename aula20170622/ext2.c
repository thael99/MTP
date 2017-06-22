#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float ** criar(int ordem) {
    float ** matriz = NULL;
    int i;
    matriz = (float **) calloc(ordem,sizeof(float*));
    for(i = 0; i < ordem; i++)
        matriz[i] = calloc(ordem,sizeof(float));
    return matriz;
}
void destroi(float ** M, int ordem) {
    int i;
    for(i = 0; i < ordem; i++)
        free(M[i]);
    free(M);
}
void preenche(float ** M, int ordem) {
    int i,j;
    for(i = 0; i < ordem; i++)
        for(j = 0; j < ordem; j++) {
            printf("Entre com [%d][%d]: ", i+1, j+1);
            scanf("%f",&M[i][j]);
        }
}
float ** cofator(float ** M, int ordem, int I, int J) {
    float ** C = criar(ordem - 1);
    int i, j, r, s;
    for(i = 0, r = 0; i < ordem; i++) {
        if(i != I) {
            for(j = 0, s = 0; j < ordem; j++) {
                if(j != J) {
                    C[r][s] = M[i][j];
                    s++;
                }
            }
            r++;
        }
    }
    return C;
}
float det(float ** M, int ordem) {
    int i,j; float soma = 0.f;
    float ** C = NULL;
    if(ordem == 1) return M[0][0];
    if(ordem == 2)
        return M[0][0]*M[1][1] - M[0][1]*M[1][0];
    if(ordem == 3)
        return (M[0][0]*M[1][1]*M[2][2] +
               M[0][1]*M[1][2]*M[2][0] +
               M[0][2]*M[1][0]*M[2][1]) -
               (M[0][0]*M[1][2]*M[2][1] +
               M[0][1]*M[1][0]*M[2][2] +
               M[0][2]*M[1][1]*M[2][0]);
    i = 0; // arbitrario
    for(j = 0; j < ordem; j++) {
        C = cofator(M, ordem, i, j);
        soma += pow(-1,i+j)*M[i][j]*det(C,ordem-1);
        destroi(C, ordem-1);
    }
    return soma;
}
int main() {
    int ordem;
    float ** Matriz = NULL;
    printf("Entre com a ordem da matriz: ");
    scanf("%d",&ordem);
    Matriz = criar(ordem);
    preenche(Matriz,ordem);
    printf("O determinante da matriz e: %g\n", det(Matriz,ordem));
    destroi(Matriz,ordem);
    return 0;
}
