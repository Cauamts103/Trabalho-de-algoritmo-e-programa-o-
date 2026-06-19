#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-33 - Múltiplos de 2 entre 1 e 30 * ");
    printf("\n**************************************************************************************** \n");
 
 int i;

    printf("Multiplos de 3 entre 1 e 30:\n");

    for(i = 1; i <= 30; i++) {
        if(i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
