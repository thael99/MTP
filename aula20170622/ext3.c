#include <stdio.h>
#include <math.h>

typedef
struct ponto{
    double x;
    double y;
}ponto;

typedef
struct poligono{
    int numP;
    ponto * vertices;
}poligono;

int determinante (ponto A, ponto B){
    return ((A.x*B.y)-(A.y*B.x));
}

ponto centroide (poligono p){
    ponto C;
    double somatorioX=0, somatorioY=0;
    int i;
    for (i=0; i<p.numP; i++){
        somatorioX+=p.vertices[i].x;
        somatorioY+=p.vertices[i].y;
    }
    C.x=(double)somatorioX/p.numP;
    C.y=(double)somatorioY/p.numP;
    return C;
}

main (){
    int a,b, c, d, i, j, numPoligonos, numPontos;
    double areaPoligono;
    ponto C;
    poligono * vetPoligono;
    printf ("digite a quantidade de poligonos: ");
    scanf ("%d", &numPoligonos);
    vetPoligono=(poligono*)calloc(numPoligonos, sizeof (poligono));
    for (i=0; i<numPoligonos; i++){
        printf ("Digite a quantidade de pontos do #%d poligono: ", i+1);
        scanf ("%d", &vetPoligono[i].numP);
        vetPoligono[i].vertices=(ponto*)calloc(vetPoligono[i].numP, sizeof (ponto));
        for (j=0; j<vetPoligono[i].numP; j++){
            printf ("Digite a coordenada x e y do #%d vertice: ", j+1);
            scanf ("%lf %lf", &vetPoligono[i].vertices[j].x, &vetPoligono[i].vertices[j].y);
        }
        areaPoligono=0;
        for (j=0; j<vetPoligono[i].numP-1; j++){
            areaPoligono+=determinante (vetPoligono[i].vertices[j], vetPoligono[i].vertices[j+1]);
        }
        areaPoligono=0.5*areaPoligono;
        if (areaPoligono<0){
            areaPoligono*=-1;
        }
        printf ("A area do poligono #%d eh %lf\n", i, areaPoligono);

        C=centroide (vetPoligono[i]);
        printf ("As coordenadas x e y do centroide do #%d poligono sao (%lf,%lf)\n", i, C.x, C.y);
    }
}
