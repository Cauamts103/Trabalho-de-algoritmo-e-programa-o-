#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-14 - Classificação de Triângulos * ");
    printf("\n**************************************************************************************** \n");
 
     float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("Triangulo Equilatero\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Triangulo Isosceles\n");
    }
    else {
        printf("Triangulo Escaleno\n");
    }

    return 0;
}
