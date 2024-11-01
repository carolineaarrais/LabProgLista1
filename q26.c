// Questão 26
#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;
    float ma, mg;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    ma = (num1 + num2 + num3) / 3;
    mg = pow(num1 * num2 * num3, 1.0 / 3.0);
    printf("Média Aritmética: %.2f\n", ma);
    printf("Média Geométrica: %.2f\n", mg);
    return 0;
}
