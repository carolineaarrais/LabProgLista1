// Questão 23
#include <stdio.h>

int main() {
    int x, n, p;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    int pot = 1 << n;
    p = x * pot;
    printf("O produto de %d por 2^%d é: %d\n", x, n, p);
    return 0;
}