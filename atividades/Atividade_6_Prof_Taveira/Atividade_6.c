#include <stdio.h>
#include <stdlib.h>

int main() {
    int **A, **B, **C;
    int rows, columns;
    int i, j;

    // Definir o tamanho das matrizes
    rows = 3;
    columns = 3;

    // Alocar memória para as matrizes A, B e C
    A = (int **)malloc(rows * sizeof(int *));
    B = (int **)malloc(rows * sizeof(int *));
    C = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        A[i] = (int *)malloc(columns * sizeof(int));
        B[i] = (int *)malloc(columns * sizeof(int));
        C[i] = (int *)malloc(columns * sizeof(int));
    }

    // Inicializar as matrizes B e C
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            B[i][j] = i + j;
            C[i][j] = i - j;
        }
    }

    // Calcular A = B + C
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            A[i][j] = B[i][j] + C[i][j];
        }
    }

    // Mostrar as matrizes A, B e C
    printf("Matriz A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Liberar a memória alocada
    for (i = 0; i < rows; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}