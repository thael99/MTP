#include <stdio.h>

union Nome {
    float f;
    int i;
}var;

main (){
    char A;
    printf ("Digite I para inteiro e F para float\n");
    scanf ("%c", &A);
    if (A=='I'){
        scanf ("%d", &var.i);
        printf ("%f", var.f);
    }
    else {
        scanf ("%f", &var.f);
        printf ("%d", var.i);
    }
}
