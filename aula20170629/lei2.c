#include <stdio.h>

typedef struct ponto {
    double x, y;
} ponto;

int main (){
    char nome[40];
    FILE * arquivo;
    double X, Y, somatorioDeX=0, somatorioDeY=0;
    int tamanho=0;
    printf ("Digite o nome do arquivo que esta os pontos:\n");
    scanf ("%s", &nome);
    printf ("sizeof(nome) %d nome: %s\n", sizeof (nome), nome);
    arquivo = fopen (nome, "r");
    printf ("ate aqui td bem\n");
    if (arquivo == NULL){
        printf ("O arquivo nn existe\n");
        return 0;
    }
    while (!feof(arquivo)){
        tamanho++;
        fscanf (arquivo, "%lf %lf", &X, &Y);
        somatorioDeX+=X;
        somatorioDeY+=Y;
    }
    printf ("O centroide esta em (%.2lf, %.2lf)\n", somatorioDeX/tamanho, somatorioDeY/tamanho);

}
