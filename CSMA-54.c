#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 54 - Validar número entre 1 e 5 * ");
    printf("\n**************************************************************************************** \n");
    
   int numero;

    do {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 5) {
            printf("Valor invalido!\n");
        }

    } while (numero < 1 || numero > 5);

    printf("Numero valido: %d\n", numero);

    return 0;
}
