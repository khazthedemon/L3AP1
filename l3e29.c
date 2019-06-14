#include <stdio.h>

int main(){
	int ite,n,sum;

	printf("Bem vindo a calculadora de Gauss...\nInsira o valor que deseja fazer os somatorio de 1 até.\n");

	scanf("%d",&n);

	for(ite=1,sum=0;ite<=n;ite++){
		sum+=ite;
	}

	printf("Seu somatorio eh: %d\n",sum);
	return 0;
}
