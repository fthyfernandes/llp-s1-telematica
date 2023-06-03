#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    char caractere;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    arquivoSaida = fopen(nomeArquivoSaida, "w");
    
    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(arquivoEntrada);
        return 1;
    }
    
    while ((caractere = fgetc(arquivoEntrada)) != EOF) {
        caractere = tolower(caractere); // Convertendo para minúsculo para facilitar a substituição
        
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            fputc('*', arquivoSaida);
        } else {
            fputc(caractere, arquivoSaida);
        }
    }
    
    printf("Arquivo de saida criado com sucesso.\n");

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    return 0;
}
