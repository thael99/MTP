#include <stdio.h>
#include <ctype.h>

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
    printf ("**********************\n");
    printf ("%s\n", texto);
    free (texto);
}
