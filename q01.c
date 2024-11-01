// Questão 01
#include <stdio.h>
int main() {
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Decimal: %d\n", x);
    printf("Hexadecimal: 0x%x\n", x);
    printf("Octal: 0o%o\n", x);
    return 0;
}