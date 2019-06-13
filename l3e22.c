#include <stdio.h>

#define K 37

int main(){
	int ite;	
	float s;

	printf("Esse programa calcula um dado somatorio...\n");

	for(ite=1,s=0;ite<=K;ite++){
		s+=((K*(K+1))/ite);
	}

	printf("%.2f\n",s);

	return 0;
}
