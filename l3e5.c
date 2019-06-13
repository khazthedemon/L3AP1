#include <stdio.h>

int main(){
	int verif=1,ite=0,idade,sum=0,contmed=0,contperc=0;
	float altura,peso,med=0;

	printf("\n");

	while(verif==1){
		ite++;

		scanf("%d%f%f",&idade,&altura,&peso);

		if(idade>50) sum++;
		if(idade >= 10 && idade <=20){
			med+=altura;
			contmed++;
		}
		if(peso < 40) contperc++;

		printf("\n");

		scanf("%d",&verif);
	}

	med/=contmed;
	contperc*=100;
	contperc/=ite;

	printf("\nQuantidade: %d\nMedia: %f\nPercentual: %d\n",sum,med,contperc);

	return 0;
}
