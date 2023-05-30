#include <stdio.h>
#include <math.h>

int main(){


float  baseMaior, baseMenor, altura, resultado;

printf("Representacao de Trapezio\n");
printf("Digite o valor da base maior do trapezio (representado em metros):\n");
scanf("%f", &baseMaior);

printf("Digite o valor da base menor do trapezio (representado em metros):\n");
scanf("%f", &baseMenor);

if(baseMenor>0 && baseMaior>0){

printf("Digite o valor da altura do trapezio (representado em metros):\n");
scanf("%f", &altura);

resultado= ((baseMaior+baseMenor)*altura)/2;

printf("A area do trapezio equivale a: %.2f metros quadrados.\n", resultado);

} else{
    printf("Insira valores maiores do que zero para a base maior e base menor do trapezio");
}
}