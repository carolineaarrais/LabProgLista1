// Questão 12
#include <stdio.h>

int main() {
    int A, B, t;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Antes da troca: A = %d, B = %d\n", A, B);
    t = A;
    A = B;
    B = t;
    printf("Após a troca: A = %d, B = %d\n", A, B);
    return 0;
}