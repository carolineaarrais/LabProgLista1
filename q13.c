// Questão 13
#include <stdio.h>

int main() {
    float c, f;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);
    f = (9 * c + 160) / 5;
    printf("Temperatura em graus Fahrenheit: %.2f°F\n", f);
    return 0;
}
