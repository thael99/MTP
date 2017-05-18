#include <stdio.h>
#include <math.h>

#define CONVERTE(a)({a.r/=255.0; a.g/=255.0; a.b/=255;})
#define CONVERTE1(a, b)({\
    b.y=16+((65.481*a.r)+(128.553*a.g)+(24.996*a.b)); \
    b.cb=128+((-37.797*a.r)-(74.203*a.g)+(112.0*a.b)); \
    b.cr=128+((112.0*a.r)-(93.786*a.g)-(18.214*a.b)); \
})
#define IMPRIME(b)(printf ("%lf %lf %lf", round(b.y), round(b.cb), round(b.cr)))

struct rgb {
    int r, g, b;
}Cor, cor2;

struct ycbcr {
    int y, cb, cr;
}final1;

main (){
    double R, G, B, d;
    double y, cb, cr;
    scanf ("%d %d %d", &Cor.r, &Cor.g, &Cor.b);
    /*R=Cor.r/255.0;
    G=Cor.g/255.0;
    B=Cor.b/255.0;
    y=16+((65.481*R)+(128.553*G)+(24.996*B));
    cb=128+((-37.797*R)-(74.203*G)+(112.0*B));
    cr=128+((112.0*R)-(93.786*G)-(18.214*B));
    */
    CONVERTE(Cor);
    COVERTE1(Cor, final1);
    //printf ("%lf %lf %lf", round(y), round(cb), round(cr));
    IMPRIME(final1);

}
