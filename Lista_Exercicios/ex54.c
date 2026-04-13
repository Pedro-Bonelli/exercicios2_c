// Modifique o exercício anterior para aceitar somente valores maiores que 0 para N. Caso o valor informado (para N) não seja maior que 0, deverá ser lido um novo valor para N.

#include <stdio.h>

int main(){
    int n;

    printf("Digite um valor: ");
    scanf("%i", &n);
    while (n <= 0)
    {
        printf("\nInvalido. Digite novamente: ");
        scanf("%i", &n);
    }
    

    int i;
    for(i = 2; i < n; i++){
        printf("%i\n", i);
    }
}