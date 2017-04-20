#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a, b, c, d, e, i;
	scanf ("%d", &a);
	srand(time(0));
	b=rand()%10;
	printf ("O numero digitado foi %d\n", a);
	printf ("O numero sorteado foi %d\n", b);
	b=b+a;
	if (b%2==0)
		printf ("a+b=%d, par", b);
	else 
		printf ("a+b=%d, impar", b);
	return 0;
}
