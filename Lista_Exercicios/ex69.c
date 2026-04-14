// O mesmo exercício anterior, mas agora não será informado o número de mercadorias em estoque. Então o funcionamento deverá ser da seguinte forma: ler o valor da mercadoria e perguntar ‘MAIS MERCADORIAS (S/N)?’. Ao final, imprimir o valor total em estoque e a média de valor das mercadorias em estoque.

#include <stdio.h>

int main(){
    float valor_merc, valor_estoque = 0, media, num_merc;
    char opc = 's';

    while (opc == 's' || opc == 'S')
    {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor_merc);

        num_merc++;
        valor_estoque = valor_estoque + valor_merc;

        printf("Mais mercadorias (S/N)? ");
        scanf(" %c", &opc);
        while(opc != 's' && opc != 'S' && opc != 'n' && opc != 'N')
        {
            printf("Opcao invalida. Digite novamente (S/N): ");
            scanf(" %c", &opc);
        }
    }

    media = valor_estoque / num_merc;
    printf("O valor total em estoque e: %.2f", valor_estoque);
    printf("\nA media de valor das mercadorias e: %.2f", media);
}
