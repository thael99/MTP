#include<stdio.h>

int soma (int *a, int *n){
    //printf ("%d\n", *a);
    if (a>=n){
        return 0;
    }
    return *a +soma(a+1, n);
}


main (){
int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
int *N = A+sizeof(A)/sizeof(int);
printf ("%d", soma(A, N));
}
