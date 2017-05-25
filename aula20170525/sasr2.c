#include <stdio.h>

void par (int a){
    int i;
    printf ("Pares:\n");
    for (i=2; i<=a; i+=2){
        printf ("%d ", i);
    }
}
void impar (int a){
    int i;
    printf ("\nImpares:\n");
    for (i=1; i<=a; i+=2){
        printf ("%d ", i);
    }
}

void

main (){
    int a;
    scanf ("%d", &a);
    par (a);
    impar (a);
}
