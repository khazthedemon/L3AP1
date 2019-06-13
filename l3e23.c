#include <stdio.h>

#define START 1003

int main(){
	int ite,n;	
	float s;

	printf("Favor inserir o valor de N para se calcular o dado somatorio...\n");

	scanf("%d",&n);

	for(ite=1,s=0;ite<=n;ite++){
		if(ite%2!=0) s+=((START-3)/ite);
		else s-=((START-3)/ite);
	}

	printf("%.2f\n",s);

	return 0;
}
