// Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido.

#include <stdio.h>

int main(){
    float n1, n2, divisao;

    printf("N1: ");
    scanf("%f", &n1);

    while(n1 == 0) {
        printf("N1: ");
        scanf("%f", &n1);
    }

    printf("N2: ");
    scanf("%f", &n2);

    while (n2 == 0)
    {
        printf("N1: ");
        scanf("%i", &n2);
    }
    
    divisao = n1 / n2;
    printf("%f", divisao);
}