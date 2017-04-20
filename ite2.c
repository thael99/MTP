#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	long long int a, b, c=1, d, e, i;
	scanf ("%lld %lld", &a, &b);
	for (i=1; i<=b; i++){
		c=c*a;
	}
	printf ("%lld^%lld=%lld", a, b, c);
	return 0;
}
