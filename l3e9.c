#include <stdio.h>

void main(){
	int n,ite,mem_n,apr=0,rep=0,exm=0;
	float med_temp,med_total=0;

	printf("Favor inserir a quantidade de alunos na turma...\n\n");

	scanf("%d",&n);

	mem_n=1;

	int apro[n+1],repro[n+1],ex[n+1],med_class[n+1];
	float med_al[3];

	for(ite=0;ite <= n+1;ite++){
		ex[ite]=0;
		apro[ite]=0;
		repro[ite]=0;
		med_class[ite]=0;	
	}

	while(mem_n<=n){
		
		printf("\nFazendo a %dª media\n",mem_n);

		for(ite=1;ite<=2;ite++){
			
			scanf("%f",&med_al[ite]);			

		}

		med_temp = (med_al[1]+med_al[2]) / 2;
		med_class[mem_n] = med_temp;

		printf("\nMedia: %.2f.\n",med_temp);
		
		if(med_temp >= 7 ){
			apro[mem_n]=1;
			ex[mem_n]=0;			
			repro[mem_n]=0;
			printf("Aluno %d\nAprovado\n",mem_n);
		}

		if(med_temp > 3 && med_temp < 7){
			apro[mem_n]=0;
			ex[mem_n]=1;			
			repro[mem_n]=0;
			printf("Aluno %d\nExame\n",mem_n);
		}

		if(med_temp <= 3 ){
			apro[mem_n]=0;
			ex[mem_n]=0;			
			repro[mem_n]=1;
			printf("Aluno %d\nReprovado\n",mem_n);
		}

		mem_n++;
	}

	for(ite=0;ite <= n+1;ite++){

		exm+=ex[ite];
		apr+=apro[ite];
		rep+=repro[ite];
		med_total+=med_class[ite];	

	}

	med_total/=n;

	printf("\nNumero de aprovados : %d\nNumero de exame : %d\nNumero de reprovados : %d\nMedia da turma : %.2f\n\n",apr,exm,rep,med_total);

	return;
}
