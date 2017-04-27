#include <time.h>
#include <stdio.h>
#include <stdlib.h>

main (){
    int b=0, c, d,i;
    double A, B, C, D, a;
    srand (time(NULL));
    scanf ("%lf", &B);
    for (i=0; i<100; i++){
        a=rand()%100+1;
        C=a/100;
        if (C<=B){
            b++;
        }
    }
    printf ("%d\n", b);

}
