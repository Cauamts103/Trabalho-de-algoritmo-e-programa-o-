#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-23 - Maior de Dois Números * ");
    printf("\n**************************************************************************************** \n");
 
 int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("O maior numero e %d.\n", n1);
    } else if (n2 > n1) {
        printf("O maior numero e %d.\n", n2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
