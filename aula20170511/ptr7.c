#include <stdio.h>
#include <stdlib.h>
void main(){
	char s[257]={0};
	printf("Digite uma frase:\n");
	fgets(s,257,stdin);
	long long int *p;
	p=(long long int *) s;
	printf("Sua msg criptografada e:\n");
	for(int i=0;i<sizeof(s)/sizeof(long long int);i++)
	{
		if(*(p+i)!=0)
			printf("%lld ", *(p+i));
	}

}
