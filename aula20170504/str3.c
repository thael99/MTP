#include <stdio.h>
#include <string.h>

main (){
    int a, b, c, d, i, j, k;
    char A[256], B[256], C, D;
    fgets (A, 256, stdin);
    a=strlen (A);
    for (i=0; i<a; i++){
        if (A[i]>=65 && A[i]<=90){
            for (j=65, k=78; j<78, k<=90; j++, k++){
                if (A[i]==j){
                    A[i]=k;
                }
                else if (A[i]==k){
                    A[i]=j;
                }
            }
        }
        else if (A[i]>=97 && A[i]<=122){
            for (j=97, k=110; j<110, k<=122; j++, k++){
                if (A[i]==j){
                    A[i]=k;
                }
                else if (A[i]==k){
                    A[i]=j;
                }
            }
        }
    }
    puts (A);
}
