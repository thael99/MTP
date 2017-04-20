#include <stdio.h>

int main() {
	int a, b, c, d, e, i;
	scanf ("%d", &a);
	if (a%2==0){
		printf ("Par");
	}
	else 
		printf ("Impar");
	if (a%3==0){
		printf ("; mult.3");
	}
	if (a%5==0){
		printf ("; mult.5");
	}
	if (a%7==0){
		printf ("; mult.7");
	}
	printf ("\n");
	return 0;
}
