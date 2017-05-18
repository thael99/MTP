#include<stdio.h>
#include<stdlib.h>

int main()
{
    float n1, n2,soma;
    printf("\nDigite dois numeros reais quaisquer:\n");
    scanf("%f %f",&n1,&n2);
    printf("\nEndereco de %.2f: %p\nEndereco de %.2f: %p\n",n1,&n1,n2,&n2);

    soma = n1 + n2;
    printf("\nSoma = %.2f\nEndereco da soma: %p\n",soma,&soma);

    return EXIT_SUCCESS;
}
