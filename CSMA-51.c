#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 50 - Número positivo obrigatório * ");
    printf("\n**************************************************************************************** \n");
    
    int numero;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    printf("Numero aceito: %d\n", numero);

    return 0;
}
