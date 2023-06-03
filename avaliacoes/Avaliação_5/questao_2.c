#include <stdio.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contadorLinhas = 0;
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            contadorLinhas++;
        }
    }
    
    printf("O arquivo possui %d linhas.\n", contadorLinhas);

    fclose(arquivo);

    return 0;
}
