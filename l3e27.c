/*deu preguiiça de fazer sem ser por chamada de função
*E dai tive essa ideia de recursividade da função e quis tentar
*/
#include <stdio.h>
unsigned long long int fact(unsigned long long int k);

int main(){
	int ite;
	float x,sum,tmp;

	printf("Favor inserir o valor de x a ser calculado...\n");

	scanf("%f",&x);

	for(ite=0,sum=1;ite<=38;){
		
		if(ite==0) ite+=2;
		else{
			tmp=x*x;
			tmp/=fact(ite);
			sum+=tmp;		
		}
		ite++;
		ite++;
	}

	printf("\nO somatorio eh igual a: %f\n",sum);

	return 0;
}

unsigned long long int fact(unsigned long long int k){
	if(k==0) return 1;
    else return k*fact(k-1);
}
