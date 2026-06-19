#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 51 - Contagem regressiva de 10 até 1 * ");
    printf("\n**************************************************************************************** \n");
    
     int i = 10;

    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);

    return 0;
}
