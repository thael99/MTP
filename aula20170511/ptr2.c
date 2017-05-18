#include<stdio.h>
#include<stdlib.h>

int main()
{
    int V[] = {0,1,2,4,8},i,cont=0;
    unsigned char *p; //byte
    p = (unsigned char *) &V;

    for(i=0;i<sizeof(V);i++)
    {
        if (p[i]==0x00) {cont++;}
        printf("\nEndereço: %p | Conteudo: %u\n", &p[i],p[i]);
    }

    printf("\nForam %d enderecos com 0x00.\n",cont);

    return EXIT_SUCCESS;
}
