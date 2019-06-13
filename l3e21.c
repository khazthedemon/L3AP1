#include <stdio.h>

int main(){
	int b=2,n=2,tmp,ite;

	printf("Favor inserir os valores de b e n para saber b^n...\nLembre que se b<2 ou n < 1 o programa ira finalizar...\n");
	
	while(b>=2 && n > 1){
		scanf("%d%d",&b,&n);
	
		for(ite=1,tmp=b;ite<=n;ite++){
			b*=tmp;
		}
		
		printf("O valor de b^n eh igual a %d\n",b);
		return 0;
	}

	return 0;
}
