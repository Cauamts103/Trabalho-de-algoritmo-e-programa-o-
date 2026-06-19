#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-16 -  Múltiplo de 3 e/ou 5 * ");
    printf("\n**************************************************************************************** \n");
 
    int numero;

    printf("Digite o numero do pedido: ");
    scanf("%d", &numero);

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("Ganhou refrigerante e sobremesa!\n");
    }
    else if (numero % 3 == 0) {
        printf("Ganhou refrigerante!\n");
    }
    else if (numero % 5 == 0) {
        printf("Ganhou sobremesa!\n");
    }
    else {
        printf("Nao ganhou premio.\n");
    }

    return 0;
}
