#include <stdio.h>

 int main() {

    int a, b, soma, subtr, divis, mult;

    printf("Digite o primeiro valor:\n");
    scanf("%d.\n\n", &a);

    printf("Digite o segundo valor:\n");
    scanf("%d.\n\n", &b);

    soma = a + b;
    subtr = a-b;
    divis = a/b;
    mult = a*b;

    printf("Os resultados são:\n");
    printf("Soma: %d.\n",soma);
    printf("Subtracao: %d.\n", subtr);
    printf("Divisao: %d.\n", divis);
    printf("Multiplicacao: %d.\n", mult);
    
 }