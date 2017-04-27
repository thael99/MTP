#include <stdio.h>
#include <complex.h>
#include <stdlib.h>

main (){
double complex A, B, Z;
double rA, rB, iA, iB;
printf ("Entre com o real A: ");
scanf ("%lf", &rA);
printf ("Entre com o imag A: ");
scanf ("%lf", &iA);
printf ("Entre com o real B: ");
scanf ("%lf", &rB);
printf ("Entre com o imag B: ");
scanf ("%lf", &iB);
A=rA+I*iA;
B=rB+I*iB;
Z=A+B;
printf ("A soma e %lf + I*%lf\n", creal(Z), cimag(Z));
printf ("ou igual a %lf <%lf rad\n", cabs(Z), carg(Z));
}
