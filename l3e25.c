#include <stdio.h>

#define DEN 15
#define NUM 2

int main(){
	int ite,sum;

	printf("Esse programa calcula um dado somatorio basico....\n");

	for(ite=0,sum=0;ite<DEN;ite++){
		sum+=(((NUM)*ite)/((DEN-ite)*(DEN-ite)));
	}

	printf("\nValor do somatorio eh: %d\n",sum);

	return 0;
}
