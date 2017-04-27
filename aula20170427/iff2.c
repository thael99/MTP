#include <stdio.h>

main (){
    int i, j;
    float a, b, c, d;
    double A, B, C, D;
    scanf ("%d", &j);
    for (i=0; i<729; i++){
        a=a+(1/(float)j);
        A=A+(1/(double)j);
    }
    printf ("%.15g\n%g\n", a, A);

}
