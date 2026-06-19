#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-44 - Conta dígitos de um números(C)) * ");
    printf("\n**************************************************************************************** \n");
    
 int numero, qtd = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {
        qtd++;
        numero = numero / 10;
    }

    printf("Quantidade de digitos: %d\n", qtd);

    return 0;
}
