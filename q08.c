// Questão 08
#include <stdio.h>
int main() {
    int x1;
    int x2, x0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x1);
    x2 = x1 + 1;
    x0 = x1 - 1;
    printf("Sucessor de %d: %d\n", x1, x2);
    printf("Antecessor de %d: %d\n", x1, x0);
    return 0;
}