#include <stdio.h>

int main(){

int a;

printf("Digite um valor de 1 a 7 para mostrar o dia da semana:\n");
scanf("%d", &a);

switch(a){
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terca-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Valor invalido\n");
        break;
}

}