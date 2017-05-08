#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	long long int a, b, c=0, d, e, i;
	char palavra[256];
	scanf ("%lld", &a);
	for (i=2; i<(a/2+1); i++){
		if (a%i==0){
			c++;
		}
	}
	if (c==0){
		printf ("primo\n");
	}
	else 
	 printf ("nao eh primo\n");
	return 0;
}
