// Faça um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15 (inclusive) e 100 (inclusive).

#include <stdio.h>

float soma = 0, media;

int main(){
    for (int i = 15; i <= 100; i++){
        soma = soma + i;
    }

    media = soma / (100-15 + 1);
    printf("A media aritmetica dos numeros inteiros entre 15 e 100 e: %.2f", media);
}