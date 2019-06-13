#include <stdio.h>

int main(){
	int num=0,contnum=0,contpar=0,contimp=0,sum=0,qnt=0;
	float maior=0.000000000000001,menor=10000000000000000,media,medpar=0;

	printf("\n");

	while(0==0){
		scanf("%d",&num);
		if(num==30000) break;		
		qnt++;
		sum+=num;
		if(num>=maior) maior=num;
		if(num<=menor) menor=num;
		if(num%2==0){
			medpar+=num;			
			contpar++;
		}
		if(num%2!=0)contimp++;
	}

	contimp*=100;
	contimp/=qnt;
	media=sum/qnt;
	medpar/=contpar;

	printf("\nSomatorio: %d\nQuantidade de Termos: %d\nMedia geral: %.5f\nMaior termo: %.5f\nMenor Termo: %.5f\nMedia dos pares: %.5f\nPercentual dos impares: %d porcento\n",sum,qnt,media,maior,menor,medpar,contimp);

	return 0;
}
