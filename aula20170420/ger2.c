#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	long long int a, b, c=0, d, e, i;
	char palavra[256];
	scanf ("%lld", &a);
	for (i=1; i<(a/2+1); i++){
		if (a%i==0){
			c+=i;
		}
	}
	if (c==a){
		printf ("eh perfeito\n");
	}
	else 
	 printf ("nao eh perfeito\n");
	return 0;
}
