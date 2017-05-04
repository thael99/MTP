#include <stdio.h>
#include <ctype.h>

main (){
    int a, b, c, d, i, j;
    char A[256], B[256], C;
    fgets (A, 256, stdin);
    a=strlen (A);
    for (i=0; i<a; i++){
        A[i]=tolower(A[i]);
        if (A[i]=='a'){
            A[i]='4';
        }
        else if (A[i]=='e'){
            A[i]='3';
        }
        else if (A[i]=='t'){
            A[i]='1';
        }
        else if (A[i]=='o'){
            A[i]='0';
        }
        else if (A[i]=='s'){
            A[i]='5';
        }
        else if (A[i]=='g'){
            A[i]='6';
        }
    }
    puts (A);

}
