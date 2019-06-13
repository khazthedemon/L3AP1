#include <stdio.h>

int main(){
	int inteiro,veri=0,k=1;

	printf("Favor inserir um numero para checagem quanto a triangular...\n");

	scanf("%d",&inteiro);

	while(veri==0){
		//printf("%d",k);		
		if(inteiro==(k*(k+1)*(k+2)) && k<inteiro) veri=1;
		k++;
		if(k==inteiro){
			printf("\nNão eh um numero triangular...\n");
			return 0;
		}	
	}

	printf("\nO numero escolhido eh triangular...\n");

	return 0;
}
