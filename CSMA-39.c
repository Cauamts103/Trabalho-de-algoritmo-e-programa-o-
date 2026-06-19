#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-39 - Verifique se um número é positivo  * ");
    printf("\n**************************************************************************************** \n");
 
   int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while (numero <= 0) {
        printf("Numero invalido. Digite novamente: ");
        scanf("%d", &numero);
    }

    printf("Numero aceito: %d\n", numero);

    return 0;
}
