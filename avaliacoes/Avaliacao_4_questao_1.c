#include <stdio.h>
#include <math.h>

int main(){

int a;
double resultado;

printf("Digite um numero inteiro:\n");
scanf("%d", &a);

if(a>0){

    resultado = log10(a);
    printf("O logaritmo na base 10 de %d vale %.2lf\n", a, resultado);
    return 0;
} else{
    printf("Numero invalido.");
    return 100;
}
}