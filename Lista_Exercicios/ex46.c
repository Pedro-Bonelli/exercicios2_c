// Acrescentar uma mensagem de 'VALOR INVÁLIDO' no exercício [44] caso o segundo valor informado seja ZERO.

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
        printf("Inválido\n");
        printf("N2: ");
        scanf("%f", &n2);
    }
    
    divisao = n1 / n2;
    printf("%f", divisao);
}