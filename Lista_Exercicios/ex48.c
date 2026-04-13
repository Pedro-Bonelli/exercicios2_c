// Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada nota. 

#include <stdio.h> 

int main(){
    float n1, n2;
    float media;

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

}