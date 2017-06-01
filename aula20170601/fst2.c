#include <stdio.h>

struct frac{
    int a, b;
}A[3];

struct frac soma (struct frac s[]){
    s[3].a=s[0].a*s[1].b+s[1].a*s[0].b;
    s[3].b=s[0].b*s[1].b;
    return s[3];
}

main (){
    int a, b, c, d;
    struct frac G;
    printf ("digite o numerador e o deominador respectivamente da prjmeira fracao: ");
   scanf ("%d %d", &A[0].a, &A[0].b);
    printf ("digite o numerador e o deominador respectivamente da segunda fracao: ");
    scanf ("%d %d", &A[1].a, &A[1].b);
    G=soma (A);
    printf ("%d/%d\n", G.a, G.b);

}
