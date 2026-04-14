// Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo os valores lidos na soma). Considere que o segundo valor lido será sempre maior que o primeiro valor lido.

#include <Stdio.h>

int main(){
    int n1, n2, soma;

    printf("Digite um valor: ");
    scanf("%i", &n1);

    printf("Digite outro valor: ");
    scanf("%i", &n2);

    for (int i = n1; i < n2; i++){
         if(n2 - n1 == 1){
            soma = n1 + n2;
        }

        else {
            soma = (n1 + n2) + i;
        }
    }

    printf("A soma dos numeros entre %i e %i e: %i", n1, n2, soma);
}