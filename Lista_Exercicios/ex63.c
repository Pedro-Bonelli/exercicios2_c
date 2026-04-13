// Escreva um algoritmo para ler 10 números e ao final da leitura escrever a soma total dos 10 números lidos.

#include <stdio.h>

int main(){
    int n, soma = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%i",&n);

        soma = soma + n;
    }

    printf("A soma dos numeros: %i", soma);
}