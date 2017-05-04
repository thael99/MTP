#include <stdio.h>

main (){
    int a[20], b, c, d, i, j;
    for (i=0; i<10; i++){
        scanf ("%d", &a[i]);
    }
    for (i=9; i>=0; i--){
        printf ("%d ", a[i]);
    }
}
