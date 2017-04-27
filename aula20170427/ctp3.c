#include <stdio.h>
#include <ctype.h>
#include <string.h>

main (){
    int a, b, c, d, i, j;
    char A[256], B[256];
    fgets (A, 256, stdin);
    a=strlen (A);
    for (i=0; i<a; i++){
        A[i]=toupper (A[i]);
    }
    //puts (A);
    printf ("%d\n", a);
}
