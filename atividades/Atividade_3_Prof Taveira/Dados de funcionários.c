#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 100


struct dados_funcionarios{
	char nome[N];
	unsigned int idade;
	float salario;
};

typedef struct dados_funcionarios dados_funcionarios;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	dados_funcionarios dados[3];
	int d;
	
	for(d=0; d<3; d++){
		
		printf("--------------- Dados da pessoa %d ---------------\n", d+1 );
		printf("Digte o nome:\n");
		scanf("%100[^\n]s", dados[d].nome);
		fflush(stdin);
		
		printf("Digite a idade:\n");
		scanf("%d", &dados[d].idade);
		fflush(stdin);
		
		printf("Digite o salário:\n");
		scanf("%f", &dados[d].salario);
		fflush(stdin);
	}
	system("cls");
	
	
	FILE *archive;
	archive =fopen("DadosDeFuncionários.txt", "w");

	 if (archive == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 100;
    } else{
	for(d=0; d<3;d++){
		
		printf("--------------- Dados informados da pessoa %d ---------------\n", d + 1);
        printf("Nome: %s\n", dados[d].nome);
        printf("Idade: %d anos.\n", dados[d].idade);
        printf("Salário: %.2f\n", dados[d].salario);
        
		fprintf(archive, "--------------- Dados informados da pessoa %d ---------------\n", d+1);
		fprintf(archive,"Nome: %s\n", dados[d].nome);
		fprintf(archive,"Idade: %d anos.\n", dados[d].idade);
		fprintf(archive,"Salário: %.2f\n", dados[d].salario);
		
	}
	
	fclose(archive);
	return 0;
	}
	
	
}