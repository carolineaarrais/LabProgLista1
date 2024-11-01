// Questão 17
#include <stdio.h>

int main() {
    float r;
    printf("Digite o raio do círculo: ");
    scanf("%f", &r);
    printf("Diâmetro: %f\n", 2 * r);
    printf("Circunferência: %f\n", 2 * 3.14159 * r);
    printf("Área: %f\n", 3.14159 * r * r);
    return 0;
}