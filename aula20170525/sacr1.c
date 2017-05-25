#include <stdio.h>
#include <time.h>

int dado (){
    int a;
    a=(rand()%6)+1;
    printf ("%d ", a);
    return a;
}

main (){
srand (time (0));
int a=0, b, c, d, i=3, j;
char A;
while (1){
i--;
printf ("aperte enter para lancar os dados");
//scanf ("%c", &A);
getchar();
setbuf(NULL, stdin);
printf ("Os resultados foram: ");
a=dado()+dado()+dado()+dado()+dado();
printf ("\nA soma eh %d\n", a);
if (a<=23 && a>=18){
    printf ("voce gaanhou!!\n");
    break;
}
if (i==0){
    printf ("voce perdeu :(\n" );
    break;
}

}
}

