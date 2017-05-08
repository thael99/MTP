#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	long long int a, b=1, c, d, e, i;
	scanf ("%lld", &a);
	for (i=1; i<=a; i++){
		b=b*i;
	}
	printf ("fat(%lld)=%lld", a, b);
	return 0;
}
