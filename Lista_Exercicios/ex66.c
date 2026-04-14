// O mesmo exercício anterior, mas agora, considere que o segundo valor lido poderá ser maior ou menor que o primeiro valor lido, ou seja, deve-se testá-los.

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

    if (n1 < n2)
    {
        printf("A soma dos numeros entre %i e %i e: %i", n1, n2, soma);
    }

    else{
        printf("Invalido");
    }
    
}