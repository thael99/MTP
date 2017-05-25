#include <stdio.h>

#define nota(a)(printf ("not a = %d\n", !a))
#define notb(b)(printf ("not b = %d\n", !b))
#define andab(a,b)(printf("a and b = %d\n", a&&b))
#define orab(a,b)(printf ("a or b = %d\n", a||b))
#define xorab(a,b)(printf ("a xor b = %d\n", a!=b))


main (){
    int a, b, c, d;
    printf ("Digite o estado de dois bits: ");
    scanf ("%d %d", &a, &b);
    nota(a);
    notb(b);
    andab(a,b);
    orab(a,b);
    xorab(a,b);
//    printf ("%d", a);
}
