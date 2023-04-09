#include <stdio.h>

int main(){

float Op;
float a, b, c;
	
	printf("Digite a nota do Trabalho de Laboratorio:\n");
	scanf("%f", &a);
	
	printf("Digite a nota da Avaliacao Semestral:\n");
	scanf("%f", &b);
	
	printf("Digite a nota do Exame Final:\n");
	scanf("%f", &c);
	
	Op= (2*a +b*3+ 4*c)/9;
	
	printf("Media:%.1f\n", Op);
	
	if(Op>=8 && Op <=10){
		printf("A\n");
	}
	if(Op>=7 && Op <8){
		printf("B\n");
	}
	if((Op>=6) && (Op <7)){
		printf("C\n");
	}
	if((Op>=5) && (Op <6)){
		printf("D\n");
	}
	if((Op>=0) && (Op <5)){
		printf("E\n");
	}
}
	