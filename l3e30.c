#include <stdio.h>

#define PI 3.141593
#define VAR 0.5
#define MAXX 4

int main(){
	int ite;	
	float ra,vol;

	printf("Esse programa vai calcular um dado Volume de uma esfera...\n");

	for(ite=1,ra=-0.5;ite<=MAXX;ite++){
		ra+=VAR;
		printf("\nO volume com raio igual a %.1f eh: %f cm^3\n\n",ra,((4/3)*PI*(ra*ra*ra)));
	}

	return 0;
}
