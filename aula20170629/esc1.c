#include <stdio.h>
#include <ctype.h>

void gravar (char * texto){
    FILE * arquivo = NULL;
    arquivo=fopen ("bloco_de_notas.txt", "a");
    if (arquivo == NULL){
        fprintf (stderr, "Problema na gravação\n");
    }
    fputs(texto, arquivo);
    fclose (arquivo);
}

void recuperar(){
    char * Texto;
    FILE * arquivo = NULL;
    arquivo = fopen ("bloco_de_notas.txt", "r");
    if (arquivo == NULL){
        fprintf (stderr, "Arquivo inexistente\n");
        exit (0);
    }
    fscanf (arquivo, "%s", Texto);
    fclose (arquivo);
    //puts (Texto);
    printf ("%s", Texto);
}

main (){
    char c;
    int t=0;
    char * texto= NULL;
    printf ("escreva e digite \\ para terminar\n");
    do {
        c=getchar ();
        t++;
        texto=(char*)realloc (texto,t*sizeof(char));
        texto[t-1]= toupper(c);
    }while (c!='\\');
    texto[t-1]='\0';
    gravar(texto);
    recuperar();

    //printf ("**********************\n");
    //printf ("%s\n", texto);
    free (texto);
}
