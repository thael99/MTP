#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF},cont=0,i;
    unsigned char *p;   //byte
    p = (unsigned char *) &vetor;

    for(i=0;i<sizeof(vetor);i++)
    {
        if(p[i]==0xFF || p[i]==11111111)    {cont++;}
        printf("Endereço: %p | Conteudo %u\n",&p[i],p[i]);
    }
    printf("\nSao %d enderecos com 0xFF ou 11111111\n",cont);

    return EXIT_SUCCESS;
}
