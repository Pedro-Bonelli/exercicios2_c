// Ler o número de alunos existentes em uma turma e, após isto, ler as notas destes alunos, calcular e escrever a média aritmética dessas notas lidas.

#include <stdio.h>

int main(){
    float n_alunos, notas, soma_notas, media;

    printf("Digite o numero de alunos na turma: ");
    scanf("%f", &n_alunos);

    for (int i = 1; i <= n_alunos; i++){
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas);

        soma_notas = soma_notas + notas;
    }

    media = soma_notas / n_alunos;

    printf("A media aritmetica das notas dos alunos foi: %.2f", media);
}