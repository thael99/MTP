#include <stdio.h>

main (){
    int a, b, c;
    enum X {primavera, verao, outono, inverno};
    printf ("digite seu mes de nascimento: ");
    scanf ("%d", &a);
    switch (a){
        case 1:
            printf ("nasceu no verao\n");
            break;
        case 2:
            printf ("nasceu no verao\n");
            break;
        case 3:
            printf ("nasceu no outono\n");
            break;
        case 4:
            printf ("nasceu no outono\n");
            break;
        case 5:
            printf ("nasceu no outono\n");
            break;
        case 6:
            printf ("nasceu no inverno\n");
            break;
        case 7:
            printf ("nasceu no inverno\n");
            break;
        case 8:
            printf ("nasceu no inverno\n");
            break;
        case 9:
            printf ("nasceu na primavera\n");
            break;
        case 10:
            printf ("nasceu na primavera\n");
            break;
        case 11:
            printf ("nasceu na primavera\n");
            break;
        case 12:
            printf ("nasceu no verao\n");
            break;
    }
}
