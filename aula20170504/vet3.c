#include <stdio.h>

main(){
    long long int a[15], b=0, c=1, d, i,j;
    for (i=0; i<10; i++){
        scanf ("%lld", &a[i]);
        b+=a[i];
        c*=a[i];
    }
    printf ("%lld; %lld\n", b, c);
}
