// Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.

#include <stdio.h>

int main(){
    int n, tabuada;

    printf("Digite um número para saber sua tabuada: ");
    scanf("%i", &n);
    while (n <= 0 || n > 10){
        printf("\nAceitamos apenas valores entre 1 e 10. Digite Novamente:\n");
        scanf("%i", &n);
    }


    printf("A tabuada de %i e:\n", n);
    for (int i = 1; i <=10; i++){
        tabuada = n * i;

        printf("\n%i", tabuada);
    }
}