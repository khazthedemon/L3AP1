//para numeros grandes o programa tem pouca memoria

#include <stdio.h>

int main(){
	int ite,k,tant,tatu,tmp;

	printf("Favor inserir um numero N para saber o N-esimo termo da sequencia de Fibonacci\n");

	scanf("%d",&k);

	printf("\n0 - 1 - ");

	for(ite=1,tant=0,tatu=1;ite<=k;ite++){
		tmp=tatu+tant;
		tant=tatu;
		tatu=tmp;
		printf("%d",tmp);
		if(ite!=k) printf(" - ");		
		}	

	printf("\n");

	return 0;
}
