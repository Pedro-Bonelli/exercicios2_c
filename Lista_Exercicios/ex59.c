// Ler 10 valores e escrever quantos desses valores lidos são NEGATIVOS.

#include <stdio.h>

int main(){
    int n, num_neg = 0;    

    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%i", &n);

        if (n < 0){
            num_neg = num_neg + 1;
        }
    }

    printf("\n%i numeros negativos", num_neg);
}