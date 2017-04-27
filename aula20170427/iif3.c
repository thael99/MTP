#include <stdio.h>

unsigned long long int fat (unsigned long long int a){
    if (a==1){
        return 1;
    }
    else
        return fat(a-1)*a;
}

main (){
    unsigned long long int a, b, c, d, i;
    scanf ("%llu", &a);
    b=fat(a);
    printf ("%llu", b);
}
