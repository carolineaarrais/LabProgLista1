// Questão 20
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);
    printf("%d é %s de %d.\n", a, (b != 0 && a % b == 0) ? "múltiplo" : "não múltiplo", b);
    return 0;
}