#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
    srand (time (0));
    int a, n, i, aleatorio, *vetAleatorios, menor=200, maior=-1, soma=0, tamanho=0;
    double media;
    char nome[40], s;
    FILE* arquivo;
    printf ("Digite 1 para criar um novo arquivo\n2 para continuar em um arquivo existente\n3 para arquivo existente\n");
    scanf ("%d", &a);

    if (a == 1){
        arquivo = fopen ("numsAleatorios.txt", "w");
        printf ("Quantidade de numeros aleatorios para colocar no arquivo: ");
        scanf ("%d", &n);
        vetAleatorios=(int*)calloc(n, sizeof (int));
        for (i=0; i<n; i++){
            aleatorio=rand()%100;
            if (aleatorio > maior){
                maior = aleatorio;
            }
            if (aleatorio < menor){
                menor = aleatorio;
            }
            soma+=aleatorio;
            vetAleatorios[i]=aleatorio;
            fprintf (arquivo, "%d ", aleatorio);
        }
        media=soma/(double)n;
        printf ("%lf\n", media);
        //nn fiz desvio padrao
    }


    else if (a == 2){
        printf ("Digite o nome do arquivo:\n");
        setbuf(stdin, NULL);
        scanf ("%s", &nome);
        arquivo=fopen (nome, "a");
        if (arquivo == NULL){
            return 0;
        }
        printf ("Digite a quantidade de numeros aleatorios a se adicionar no arquivo %s:\n", nome);
        setbuf(stdin, NULL);
        scanf ("%d", &n);
        for (i=0; i<n; i++){

            aleatorio = rand()%100;
            fprintf (arquivo, "%d\n", aleatorio);
        }
        fseek (arquivo, 0, SEEK_SET);
        printf ("ate aqui td bem0\n");
        while (!feof(arquivo)){ //dando erro nesse while, nn sei como fazer o ponteiro arquivo chegar ate o eof
            printf ("ate aqui td bem\n");
            fscanf (arquivo, "%d", &vetAleatorios[tamanho]);
            //printf ("%d\n\n\n\n\n\n\n\n", vetAleatorios[tamanho]);
            soma+=vetAleatorios[tamanho];
            tamanho++;
        }
        media=soma/(double)tamanho;
        printf ("media %lf", media);
        //nn fiz menor, maior e desvio padrao
    }


    else if (a == 3){
        //mta preguiça pra fazer esse
    }
}
