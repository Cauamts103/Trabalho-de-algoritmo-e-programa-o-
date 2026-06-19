#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-34 - Verificar se um Número é Primo * ");
    printf("\n**************************************************************************************** \n");
 
 int num, i, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            divisores++;
        }
    }

    if(divisores == 2) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}
