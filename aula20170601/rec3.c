#include <stdio.h>

struct frac{
    int a, b;
}A[3];

struct frac soma (struct frac s[]){
    s[3].a=s[0].a*s[1].b+s[1].a*s[0].b;
    s[3].b=s[0].b*s[1].b;
    return s[3];
}

int mdc (int a, int b){
    if (a==b || b==0){
        return a;
    }
    else if (a==0){
        return b;
    }
    else if (a%2==0 && b%2!=0){
        return mdc (a/2, b);
    }
    else if (a%2!=0 && b%2==0){
        return mdc (a, b/2);
    }
    else if (a%2==0 && b%2==0){
        return (2*mdc (a/2, b/2));
    }
    else if (a>b){
        return (mdc (((a-b)/2), b));
    }
    else
        return (mdc (((b-a)/2), a));
}

main (){
    int a, b, c, d;
    struct frac G;
    printf ("digite o numerador e o deominador respectivamente da prjmeira fracao: ");
   scanf ("%d %d", &A[0].a, &A[0].b);
    printf ("digite o numerador e o deominador respectivamente da segunda fracao: ");
    scanf ("%d %d", &A[1].a, &A[1].b);
    G=soma (A);
    printf ("%d/%d\n", G.a/mdc (G.a, G.b), G.b/mdc (G.a, G.b));

}
