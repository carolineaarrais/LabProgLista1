// Questão 11
#include <stdio.h>

int main() {
    int num1, num2;
    int s, p, d, q, r;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    s = num1 + num2;
    p = num1 * num2;
    d = num1 - num2;
    if (num2 != 0) {
        q = num1 / num2;
        r = num1 % num2;
    } else {
        printf("Divisão por zero não é permitida.\n");
        return 1;
    }
    printf("Soma: %d\n", s);
    printf("Produto: %d\n", p);
    printf("Diferença: %d\n", d);
    printf("Quociente: %d\n", q);
    printf("Resto da divisão: %d\n", r);
    return 0;
}