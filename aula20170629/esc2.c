#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256
typedef struct ponto {
    double x, y;
}Ponto;

main (){
    Ponto * conjunto = NULL;
    int i, npontos;
    char nome_arquivo[MAXCHAR];
    FILE * arquivo;
    printf ("Entre com o nome do arquivo sem espacos: ");
    scanf ("%s", nome_arquivo);
    printf ("Quantos pontos: ");
    scanf ("%d", &npontos);
    conjunto =(Ponto*)malloc(npontos *sizeof (Ponto));
    for (i=0; i<npontos; i++){
        printf ("Coordenada x do #%d ponto: ", i);
        scanf ("%lf", &conjunto[i].x);
        printf ("Coordenada y do #%d ponto: ", i);
        scanf ("%lf", &conjunto[i].y);
    }
    arquivo = fopen(nome_arquivo, "wb");
    fwrite (conjunto, sizeof(Ponto), npontos, arquivo);
    fclose(arquivo);
    free (conjunto);

}

