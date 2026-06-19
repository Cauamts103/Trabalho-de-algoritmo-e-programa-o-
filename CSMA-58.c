#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 58 - Calculadora de Bolso de Operações ");
    printf("\n**************************************************************************************** \n");
    
   int opcao;

    float num1, num2, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado = %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado = %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado = %.2f\n", resultado);
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado = %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        default:
            printf("Operacao matematica nao reconhecida.\n");
    }

    return 0;
}
