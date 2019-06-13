#include <stdio.h>

int main(){
	int base, exp,base_temp;

	printf("Favor inserir o valor de base e exponente a serem calculados...\n");

	scanf("%d%d",&base,&exp);
	
	for(base_temp=base;exp>0;exp--){
		base*=base_temp;
	}

	printf("\nO resultado eh igaul: %d\n",base);

	return 0;
}
