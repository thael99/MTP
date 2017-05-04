#include <stdio.h>
#include <ctype.h>
#include <string.h>

main (){
    int A, B, C, i;
    char b[255]="BOM DIA", a[255], c[255];
    gets (a);
    A=strlen (a);
    for (i=0; i<A; i++){
        a[i]=toupper(a[i]);
    }
    if (strcmp(b, a)==0){
        printf ("Bom dia para vc tbm\n");
    }
    else if (strcmp(b, a)!=0){
        printf ("Voce quis dizer: %s\n", a);
    }
}
