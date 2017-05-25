#include <stdio.h>
#include <time.h>

int sorteio (){
    int a;
    a=(rand()%10)+1;
    printf ("numero sorteado foi %d\n", a);
    return a;
}

main (){
    srand (time(0));
    int a, b, c, d, i, j;
    //printf ("digite um nmr de 1 a 10\n");
    scanf ("%d", &b);
    //printf ("b=%d\n", b);
    //setbuf(NULL, stdin);
    getchar ();
    printf ("b=%d\n", b);
    for (i=0; i<10; i++){
        printf ("aperte enter para sortear o numero");
        getchar ();
        //getchar ();
        a=sorteio();
        if (a==b){
            printf ("PARABENS!!\n");
        }
    }
}
