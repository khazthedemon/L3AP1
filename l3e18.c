#include <stdio.h>

#define COLLUMS 10
#define ROWS 10

int main(){
	int A[COLLUMS][ROWS],ite,ite2;

	printf("Esse eh um programa simples de escrita dos indices de uma matriz\n\n");

	for(ite=1;ite<=10;ite++){
		for(ite2=1;ite2<=10;ite2++){
			if(ite==ite2)printf("a%d%d ",ite,ite2);
			else printf("      ");
			if(ite2==10)printf("\n");
		}
	}

	printf("\n");

	return 0;
}
