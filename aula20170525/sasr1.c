#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define N 256

void Ale() {
    int idfrase=rand()%9;
    switch(idfrase) {
        case 0: printf("Tudo bem?\n"); break;
        case 1: printf("Ok!\n"); break;
        case 2: printf("LOL!\n"); break;
        case 3: printf("Que legal!\n"); break;
        case 4: printf("Que chato\n"); break;
        case 5: printf("Fale mais sobre isso!\n"); break;
        case 6: printf("Sobre o que quer falar?\n"); break;
        case 7: printf("Eu nao acho...\n"); break;
        case 8: printf("Ta bom, eu aceito.\n"); break;
    }
}

int main() {
    int a, i;
    srand(time(NULL));
    char frase[N];
    printf("Ola humano, o que temos pra hoje?\n");
    while(1){
    fgets(frase,N,stdin);

    frase[strlen(frase)-1]='\0';
    a=strlen(frase);
    //printf ("a=%d", a);
    //printf ("frase='%s'terminou\n", frase);
    for (i=0; frase[i]; i++){
        frase[i]=toupper(frase[i]);
    }
    //printf ("frase='%s'terminou\n", frase);
    if (strcmp(frase,"TCHAU")==0){
        break;
    }
    Ale();
    }
    printf("Tchau, foi um prazer!");
    return 0;
}
