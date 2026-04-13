// Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] (inlcuindo os valores 10 e 20 no intervalo) e quantos deles estão fora deste intervalo.

#include <stdio.h> 

int main(){
    int n, intervalo = 0, fora_inter = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%i", &n);

        if (n >= 10 && n <= 20)
        {
            intervalo = intervalo + 1;
        }

        else
            fora_inter = fora_inter + 1;
    }

    printf("Estao no intervalo [10,20]: %i numeros\n", intervalo);
    printf("Nao estao no intervalo [10,20]: %i numeros\n", fora_inter);
}