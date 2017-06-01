#include <stdio.h>
#define n 256

void func (char * a){
    if (*a!='\0'){
        func (a+1);
    }
    printf ("%c", *a);
}

main (){
    char f[n];
    printf ("entre com a frase\n");
    fgets (f,n,stdin);
    func(f);
}
