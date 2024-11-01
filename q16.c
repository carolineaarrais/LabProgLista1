// Questão 16
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    int mo = abs(n);
    printf("O valor absoluto de %d é: %d\n", n, mo);
    return 0;
}