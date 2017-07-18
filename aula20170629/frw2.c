#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main (){
    srand (time (0));
    int a, n, i, aleatorio, *vetAleatorios, menor=200, maior=-1, soma=0, tamanho=0;
    double media;
    char nome[40], s;
    FILE *arquivo;
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
            fprintf (arquivo, "%d\n", aleatorio);
        }
        media=soma/(double)n;
        printf ("Media %lf\nMenor %d\nMaior %d\n", media, menor, maior);
        fclose (arquivo);
        free (vetAleatorios);
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
        fclose (arquivo);
        arquivo=fopen (nome, "r");
        while (!feof(arquivo)){
            fscanf (arquivo, "%d", &aleatorio);
            if (menor>aleatorio){
                menor=aleatorio;
            }
            if (maior<aleatorio){
                maior=aleatorio;
            }
            soma+=aleatorio;
            tamanho++;
        }
        media=soma/(double)tamanho;
        printf ("Media %lf\nMenor %d\nMaior %d\n", media, menor, maior);
        fclose(arquivo);
        //nn fiz menor, maior e desvio padrao
    }


    else if (a == 3){
            printf ("Digite o nome do arquivo:\n");
            scanf ("%s", &nome);
            arquivo=fopen(nome, "r");
            printf ("\nOs numeoros aleatorios em %s sao:\n", nome);
            while (!feof(arquivo)){
                fscanf (arquivo, "%d", &aleatorio);
                printf ("%d\n", aleatorio);
                if (aleatorio<menor){
                    menor=aleatorio;
                }
                if (aleatorio>maior){
                    maior=aleatorio;
                }
                tamanho++;
                soma+=aleatorio;
            }
            media=soma/(double)tamanho;
            printf ("Media %lf\nMenor %d\nMaior %d\n", media, menor, maior);
            fclose (arquivo);
    }
}
