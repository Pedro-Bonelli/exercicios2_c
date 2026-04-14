// Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo que permita a entrada das seguintes informações: a) o número total de mercadorias no estoque; b) o valor de cada mercadoria. Ao final imprimir o valor total em estoque e a média de valor das mercadorias.

#include <stdio.h>

int main(){
    float mercadorias, valor_merc, valor_estoque, media;

    printf("Digite o numero total de mercadorias em estoque: ");
    scanf("%f", &mercadorias);

    printf("Digite o valor de cada mercadoria\n");
    for (int i = 1; i <= mercadorias; i++)
    {
        printf("Valor da mercadoria: ");
        scanf("%f", &valor_merc);

        valor_estoque = valor_estoque + valor_merc;
    }
    
    printf("O valor total em estoque e: %.2f\n", valor_estoque);
    
    media = valor_estoque / mercadorias;
    printf("A media de valor das mercadorias e: %.2f", media);
    
}