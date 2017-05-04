#include <stdio.h>
#include <time.h>

main (){
    int a, maior=0, menor=15, i, c;
    scanf ("%d", &a);
    srand (time(NULL));
    for (i=0; i<a; i++){
        c=rand()%10;
        if (maior<c){
            maior=c;
        }
        if (menor>c){
            menor=c;
        }
    }
    printf ("min=%d max=%d\n", menor, maior);

}
