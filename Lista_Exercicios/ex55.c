// Escreva um algoritmo que calcule e imprima a tabuada do 8 (1 a 10).

#include <stdio.h>

int main(){
    int tabuada;

    printf("Tabuada do 8:\n");
    for (int i = 1; i <=10; i++){
        tabuada = 8 * i;
        printf("\n%i", tabuada);
    }
}