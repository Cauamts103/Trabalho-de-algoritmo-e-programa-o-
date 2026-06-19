#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-32 - Quadrado dos Números de 1 a 10 * ");
    printf("\n**************************************************************************************** \n");
 
 int i;

    for(i = 1; i <= 10; i++) {
        printf("%d ao quadrado = %d\n", i, i * i);
    }

    return 0;
}
