#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    unsigned int x = 0xFACA8421;
    void *v;
    unsigned char * p; //byte
    printf("\nVariavel: %X\n", x); //%X para ver na base hexadecimal
    printf("\nEndereço: %p | Conteudo: %u\n",&x,x);

    //sizeof retorna o tamanho em bytes
    v = (void *) &x;
    p = (unsigned char *) v; //static_cast
    for(i=0;i<sizeof(x);i++)
    {
        printf("Em: %p | Contem: %u ou %X ou %c\n",p+i,*(p+i),p[i],p[i]);
    }

    return EXIT_SUCCESS;
}
