#include <stdio.h>

int main(){

/* As notas 'a' e 'b' tem peso 1, a nota 'c' tem peso 2. A nota vai de 0 a 100.*/
float a, b, c, media;


printf("Digite a nota da primeira prova:\n");
scanf("%f", &a);

printf("Digite a nota da segunda prova:\n");
scanf("%f", &b);

printf("Digite a nota da terceira prova:\n");
scanf("%f", &c);

media= (1*a+1*b+2*c)/(1+1+2);

printf("A media do aluno e:\n %.2f", media);

if(media>=60){
    printf("\nAprovado");
} else{
    printf("\nReprovado");
}

}