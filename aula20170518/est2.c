//#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define n 1000
#define frand(min, max)\
    (min+(max-min)*rand()/(float)RAND_MAX)

typedef
    struct Pnt {float x, y, z;}
    ponto;

main(){
    int a;
    float mediax, mediay, mediaz;
    srand (time(0));
    ponto pntos [n];
    int i, numpontos;
    for (i=0; i<n; i++){
        pntos[i].x=frand(-10.0, 10.0);
        pntos[i].y=frand(-10.0, 10.0);
        pntos[i].z=frand(-10.0, 10.0);
    }
    scanf ("%d", &a);
    for (i=0; i<a; i++){
        mediax+=pntos[i].x;
        mediay+=pntos[i].y;
        mediaz+=pntos[i].z;
    }
    printf ("centro de massa eh (%lf, %lf, %lf)", mediax/a, mediay/a, mediaz/a);
}
