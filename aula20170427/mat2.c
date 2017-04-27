#include <stdio.h>
#include <math.h>

main (){
double a, b, c, d, i;
double A, B;
scanf ("%lf %lf %lf", &a, &b, &c);
A=(a*a+b*b-2*b*c*cos(c));
A=sqrt(A);
printf ("%.4lf\n", A);
}
