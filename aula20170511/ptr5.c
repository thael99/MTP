#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define N 1000

int main()
{
    srand(time(NULL));
    int i, vet[N], numero,cont=0;
    unsigned char *p; //byte

    for(i=0;i<N;i++) {vet[i] = rand();}

    p = (unsigned char *) vet;
    printf("\nEscolha um numero entre 0 e 235: \n");
    scanf("%d", &numero);

    for(i=0;i<sizeof(vet);i++)
    {
        if(p[i]==numero)
        {
            cont++;
            printf("\nEm %p, temos %d\n",&p[i],p[i]);
        }
    }
    printf("%d bytes com %d entre %p e %p\n",cont,numero,p,p+sizeof(vet));

    return EXIT_SUCCESS;
}
