#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar/abrir o arquivo.\n");
        return 1;
    }

    printf("Digite os caracteres a serem gravados no arquivo ('0' para encerrar):\n");

    while ((caractere = getchar()) != '0') {
        fputc(caractere, arquivo);
    }

    fclose(arquivo);

    printf("Arquivo fechado com sucesso.\n");

    return 0;
}
