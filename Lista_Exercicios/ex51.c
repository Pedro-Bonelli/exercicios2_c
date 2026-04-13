// Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem decrescente.

#include <stdio.h>

int main(){
    printf("1 a 10 em ordem decrescente:\n");

    int i;
    for (i = 10; i >= 1; i--){
        printf("%i\n", i);
    }
}