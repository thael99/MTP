#include <stdio.h>
#include <stdlib.h>
void main(){
	char s[17]={0};
	printf("Digite uma frase:\n");
	fgets(s,17,stdin);
	unsigned int *p;
	p=(unsigned int *) s; 
	printf("Cada byte em inteiro e:\n");
	for(int i=0;i<sizeof(s)/4;i++)
	{
		printf("\n%d %x", p[i], p[i]);
	}
}
