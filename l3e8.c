#include <stdio.h>

void main(){
	int val,sum=0;

	printf("Esse eh um programa com intuito de escrever os numeros presente no intervalo (1 ; 20) dos inteiros...\n\n");

	for(val=1;val<21;val++){
		sum+=val;
		printf("O numero atual eh: %d \nE o somatorio eh: %d\n",val,sum);
	}

	return;
}
