#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 52 - Soma até o usuário inserir múltiplo de 10 * ");
    printf("\n**************************************************************************************** \n");
    
    int numero, soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

    } while (numero % 10 != 0);

    printf("Soma total = %d\n", soma);

    return 0;
}
