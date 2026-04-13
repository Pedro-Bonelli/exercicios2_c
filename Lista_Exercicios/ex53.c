// Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere que o N será sempre maior que ZERO.

#include <stdio.h> 

int main(){
    int n;

    printf("Digite um valor: ");
    scanf("%i", &n);

    int i;
    for(i = 2; i < n; i++){
        printf("%i\n", i);
    }
}