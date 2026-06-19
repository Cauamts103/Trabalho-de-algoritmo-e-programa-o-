#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-36 - Contar até 10 com while * ");
    printf("\n**************************************************************************************** \n");
 
int contador = 1;

    while (contador <= 10) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}
