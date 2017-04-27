#include <stdio.h>

main (){
    double a, b, c, d, i;
    scanf("%lf %lf", &a, &b);
    c=log10(a)/log10(b);
    printf ("%.4lf\n", c);
}
