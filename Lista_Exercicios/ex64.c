// Escreva um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem ser somados. Escreva o valor final da soma efetuada.

#include <stdio.h>

int main(){
    int n, soma = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%i", &n);

        if (n < 40){
            soma = soma + n;
        }
    }

    printf("a soma dos numeros menores do que 40 e: %i", soma);
}