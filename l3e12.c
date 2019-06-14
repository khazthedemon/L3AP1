/*deu preguiiça de fazer sem ser por chamada de função
*E dai tive essa ideia de recursividade da função e quis tentar
*/
#include <stdio.h>

unsigned long long int fact(unsigned long long int k);

int main(){
	int ite;
	float x,sum;

	printf("Favor inserir o valor para x para que se calcule o dado somatorio...\n");

	scanf("%f",&x);

	for(ite=0,sum=0;ite<20;ite++){
		if(ite==0) sum=x;
		else if(ite%2!=0) sum-=(x/fact(ite));
			 else sum+=(x/fact(ite));
	}

	printf("O somatorio para o x escolhido eh: %f\n",sum);

	return 0;
}

unsigned long long int fact(unsigned long long int k){
	if(k==0) return 1;
    else return k*fact(k-1);
}
