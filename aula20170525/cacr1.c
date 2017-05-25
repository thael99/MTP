#include <stdio.h>

int c=0;

void primos(int P, int b[]){
	int w = 1, i;
	for(i=2; i<P; i++){
		if(P%i == 0)
			w = 0;
	}
	if (w==1){
        b[c]=P;
        //d[c]=P;
        c++;
	}
}

main (){
    int a, b[1000], i, j;
    scanf ("%d", &a);
    for (i=2; i<=a; i++){
        primos(i, b);
    }
    //for (i=0; i<c; i++){
    //    printf ("%d ", b[i]);
    //}
    for (i=0; i<=c; i++){
        for (j=1+i; j<c; j++){
            if (b[i]+b[j]==a){
                printf ("%d=%d+%d\n", a, b[i], b[j]);
            }
        }
    }
}


