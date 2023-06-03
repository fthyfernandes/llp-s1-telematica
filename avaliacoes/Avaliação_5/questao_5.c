#include <stdio.h>

int main() {
    char nomeArquivo[100];
    char caractere;
    FILE *arquivo;
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &caractere);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (!feof(arquivo)) {
        char c = fgetc(arquivo);
        if (c == caractere) {
            contador++;
        }
    }

    printf("O caractere '%c' ocorre %d vezes no arquivo.\n", caractere, contador);

    fclose(arquivo);

    return 0;
}
