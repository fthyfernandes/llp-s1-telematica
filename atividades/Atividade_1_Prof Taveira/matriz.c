#include <stdio.h>

#define N 3 // Tamanho da matriz quadrada

int main() {
    int matriz1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int soma[N][N];
    
    // Imprimir a diagonal principal da matriz1
    printf("Diagonal principal da matriz1:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", matriz1[i][i]);
    }
    printf("\n\n");
    
    // Calcular e imprimir a matriz soma de matriz1 e matriz2
    printf("Matriz soma:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
