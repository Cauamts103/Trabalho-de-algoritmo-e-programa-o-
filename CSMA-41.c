#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-41 - Número primo com while * ");
    printf("\n**************************************************************************************** \n");
 
   int numero, divisor = 1, qtdDivisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (divisor <= numero) {
        if (numero % divisor == 0) {
            qtdDivisores++;
        }
        divisor++;
    }

    if (qtdDivisores == 2) {
        printf("O número e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    return 0;
}
