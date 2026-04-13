// Acrescente uma mensagem 'NOVO CÁLCULO (S/N)?' ao final do exercício [48]. Se for respondido 'S' deve retornar e executar um novo cálculo, caso contrário deverá encerrar o algoritmo.

#include <stdio.h> 

int main(){
    float n1, n2;
    float media;
    char opc = 's';


    while (opc == 's' || opc == 'S')
    {
        printf("Digite a nota da primeira avaliação: ");
        scanf("%f", &n1);
        while(n1 < 0 || n1 > 10)
        {
            printf("\nInvalido. \nDigite a nota da primeira avaliação: ");
            scanf("%f", &n1);
        }

        printf("Digite a nota da segunda avaliação: ");
        scanf("%f", &n2);
        while (n2 < 0 || n2 > 10)
        {
            printf("\nInvalido. \nDigite a nota da segunda avaliação: ");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2;
        printf("A media das avaliacoes foi de: %.2f", media);

        printf("\nNovo calculo (s/n)? : ");
        scanf(" %c", &opc);
        while (opc != 's' && opc != 'n' && opc != 'S' && opc != 'N')
        {
            printf("\nInvalido. \nNovo calculo (s/n)? : ");
            scanf(" %c", &opc);
        }
        
    }

}