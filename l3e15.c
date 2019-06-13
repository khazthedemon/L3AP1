#include <stdio.h>

int main(){
	int ite,k;

	printf("Favor inserir o valor N a ser calculado o N-esimo termo da sequencia\n");

	scanf("%d",&k);

	for(ite=1;ite<=k;ite++){
		printf("%d ",(ite*ite));
		if(ite!=k) printf("+ ");
	}

	printf("\n");

	return 0;
}
