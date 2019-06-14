/*deu preguiiça de fazer sem ser por chamada de função
*E dai tive essa ideia de recursividade da função e quis tentar
*/
#include <stdio.h>
#include <math.h>	

#define RAD 3.14159265/180.0

unsigned long long int fact(unsigned long long int k);

int main(){
	int ite;
	float x,sum,tmp;

	printf("Favor inserir o valor de x a ser calculado...\n");

	scanf("%f",&x);

	x*=RAD;

	for(ite=0,sum=1;ite<=38;){
		
		if(ite==0) sum=1;
		else{
			if(ite%2==0){
				tmp=x*x;
				tmp/=fact(ite);
				sum-=tmp;		
			}else{
				tmp=x*x;
				tmp/=fact(ite);
				sum+=tmp;
			}
		}
		ite++;
		ite++;
	}

	printf("\na) O somatorio eh igual a: %f\n",sum);
	printf("b) O valor da diferenca eh: %lf\n",(sum-cos(x)));
	printf("c) O valor de COS(x): %lf\n",cos(x));
	return 0;
}

unsigned long long int fact(unsigned long long int k){
	if(k==0) return 1;
    else return k*fact(k-1);
}
