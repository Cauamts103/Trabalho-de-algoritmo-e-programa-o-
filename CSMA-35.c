#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-35 - Número de Fibonacci (n termos) * ");
    printf("\n**************************************************************************************** \n");
 
    int n, i;
    int a = 0, b = 1, prox;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);

        prox = a + b;
        a = b;
        b = prox;
    }

    return 0;
}
