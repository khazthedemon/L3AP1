#include <stdio.h>

int main(){
	int ite;
	float n1,n2,tmp;

	printf("\n");

	scanf("%f%f",&n1,&n2);

	if(n1>=n2){
		tmp=n2;
		n2=n1;
		n1=tmp;
	}

	//printf("\n\n%f %f\n\n",n1,n2);

	for(ite=1,tmp=0;ite<=n2;ite++){
		tmp+=n1;
	}

	printf("O resultado eh: %f\n",tmp);

	return 0;
}
