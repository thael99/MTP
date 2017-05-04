#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main (){
    unsigned long long int b=0, c,d,i;
    int a[10000];
    float A;
    srand (time(NULL));
    printf ("Digite um inteiro positivo ");
    scanf ("%llu", &c);
    for (i=0; i<10000; i++){
        b+=(abs (rand())%c)+1;
    }
    A=b/10000.0;
    printf ("%.4f\n", A);
}
