#include <stdio.h>

int main(){
	int ini,sum,med,contmed;

	printf("Esse programa vai calcular o somatorio e a media dos numeros pares entre 50 e 70...\n");

	for(ini=50,contmed=0,sum=0,med=0;ini<=70;ini++){
		if(ini%2==0){
			contmed++;
			sum+=ini;
			med+=ini;
		}
	}

	med/=contmed;

	printf("O somatorio eh: %d\nE a media eh: %d\n",sum,med);

	return 0;
}
