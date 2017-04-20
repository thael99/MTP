#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	long long int a, b, c=1, d, e, i;
	char palavra[256];
	i=0;
	scanf ("%s", palavra);
	while (1){
		if (palavra[i]=='\0'){
			break;
		}
		i++;
	}
	printf ("%lld\n", i);
	
	return 0;
}
