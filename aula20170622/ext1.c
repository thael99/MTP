#include <stdio.h>
#include <stdlib.h>
int mostrar(float * numeros, int n){
	printf("O(s) numero(s) já cadastrado(s) e(sao):\n");
	int i=0;
	for(i=0;i<n;i++){
		printf("%g ", numeros[i]);
	}
	return 0;
}
float media(float * numeros, int n){
	float soma=0;
	int i=0;
	for(i=0;i<n;i++){
		soma=soma+numeros[i];
	}
	return soma/n;
}
float maior(float * numeros, int n){
	int i=0;
	float ma=numeros[0];
	for(i=1;i<n;i++){
		if(numeros[i]>ma)
			ma=numeros[i];
	}
	return ma;
}
float menor(float numeros[], int n){
	int i=0;
	float me=numeros[0];
	for(i=1;i<n;i++){
		if(numeros[i]<me)
			me=numeros[i];
	}
	return me;
}
int main(){
	float * numeros = NULL;
	int n=0;
	int i=0, c=1;
	do{
		n++;
		numeros = realloc(numeros, n * sizeof(float));
		printf("Digite um numero:\n");
		scanf("%f", &(numeros[n-1])); getchar();
		mostrar(numeros,n);
		printf("\nA media dos numeros e: %g", media(numeros,n));
		printf("\nO maior numero e: %g", maior(numeros,n));
		printf("\nO menor numero e: %g", menor(numeros,n));
		printf("\nDeseja continuar?(Sim-1/Nao-2)\n");
		scanf("%d", &c);
	}while(c==1);
	free(numeros);
	return 0;
}
