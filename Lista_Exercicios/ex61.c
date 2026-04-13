// Ler 10 valores, calcular e escrever a média aritmética desses valores lidos.

#include <stdio.h>

int main(){
    float n, soma, media;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &n);

        soma = soma + n;
    }

    media = soma / 10;
    printf("A media dos 10 numeros e: %.2f", media);
}