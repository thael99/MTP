#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a, b, c, d, e, i;
	//scanf ("%d", &a);
	srand (time(0));
	a=rand()%6+1;
	b=rand()%6+1;
	c=rand()%6+1;
	printf ("O dados cairam em %d %d %d e a soma eh %d.\n", a, b, c, a+b+c);
	if ((a+b+c)==11 || (a+b+c)==7)
	printf ("Portanto o jogador ganhou.\n");
	else 
	printf ("Portanto o jogador perdeu.\n");
	return 0;
}
