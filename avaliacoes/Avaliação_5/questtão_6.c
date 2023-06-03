#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contador[26] = {0}; // Array para contar a ocorrência de cada letra do alfabeto
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (isalpha(caractere)) { // Verifica se o caractere é uma letra
            caractere = tolower(caractere); // Converte para minúsculo para facilitar a contagem
            
            int indice = caractere - 'a'; // Calcula o índice no array baseado no valor ASCII da letra
            contador[indice]++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        char letra = i + 'a'; // Calcula o caractere correspondente ao índice
        printf("A letra %c ocorre %d vezes.\n", letra, contador[i]);
    }

    fclose(arquivo);

    return 0;
}
