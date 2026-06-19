#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-37 - 	Soma de Números até digitar zero * ");
    printf("\n**************************************************************************************** \n");
 
   int numero, soma = 0;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero;

        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("Soma total = %d\n", soma);

    return 0;
}
