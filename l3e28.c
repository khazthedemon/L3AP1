#include <stdio.h>
#include <math.h>	

int main(){
	int ite;
	float pi,sum,tmp;

	printf("Esse programa ira calcular uma aproxmimação de pi...\n");

	for(ite=1,tmp=1,sum=0;ite<=51;ite++){
		if(ite%2!=0){
			sum+=(1/(tmp*tmp*tmp));		
		}else{
			sum-=(1/(tmp*tmp*tmp));
		}
		tmp+=2;
	}

	pi=cbrt(sum*32);

	printf("\nPI eh igual a: %f\n",pi);
	return 0;
}

