#include <stdio.h>

int main() {
	int ite,k=0,cont;

    printf("Favor inserir um valor que se deseja saber seu fatorial...\n");

	scanf("%d",&k);

	if(k<0){
		printf("\nNumero invalido\n");
		return 0;
	}
	
	if(k==0){
		printf("\nO fatorial eh: 1\n");
		return 0;
	}else{
		for(ite=1,cont=1;ite<=k;ite++){
			cont*=ite;
		}
	}

	printf("\nO fatorial eh: %d\n",cont);

    return 0;
}
