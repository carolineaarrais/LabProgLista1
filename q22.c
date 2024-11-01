// Questão 22
#include <stdio.h>

int main() {
    int n, c, d, u, n2;
    printf("Digite um número de três dígitos: ");
    scanf("%d", &n);
    c = n / 100;
    d = (n / 10) % 10;
    u = n % 10;
    n2 = (u * 100) + (d * 10) + c;
    printf("Número com algarismos invertidos: %d\n", n2);
    return 0;
}