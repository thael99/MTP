#include <stdio.h>

union a{
    int a;
    char A[4];
}A;

main (){
    printf ("digite uma palavra de 3 letras\n");
    scanf ("%s", &A.A);
    printf ("%X", A.a);
}
