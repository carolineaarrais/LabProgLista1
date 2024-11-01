// Questão 03
#include <stdio.h>
int main() {
    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    printf("Triplo de %d: %d\n", x, 3 * x);
    printf("Quadrado de %d: %d\n", x, x * x);
    printf("Meio de %d: %.1f\n", x, x / 2.0);
    return 0;
}