#include <stdio.h>
#include <ctype.h>

main (){
    int a, b, c, d, i, j=0;
    char A[256], B[256], C, D;
    fgets(A, 256, stdin);
    a=strlen (A);
    B[0]=A[0];
    j++;
    for (i=1; i<a; i++){
        if (A[i-1]==' ' && A[i]!=' '){
            B[j]=A[i];
            B[j]=toupper (B[j]);
            j++;

        }
    }
    B[j]=NULL;
    printf ("%s\n", B);
}
