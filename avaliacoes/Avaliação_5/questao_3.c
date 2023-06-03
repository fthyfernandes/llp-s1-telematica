#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contadorVogais = 0;
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere); // Convertendo para minúsculo para facilitar a verificação das vogais
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            contadorVogais++;
        }
    }
    
    printf("O arquivo possui %d vogais.\n", contadorVogais);

    fclose(arquivo);

    return 0;
}
