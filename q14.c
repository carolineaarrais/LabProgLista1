// Questão 14
#include <stdio.h>

int main() {
    const float salD = 50.25;  // Salário por dia
    int D;
    float salB, grat = 0.0, salL;
    printf("Digite o número de dias trabalhados pelo vendedor: ");
    scanf("%d", &D);
    salB = D * salD;
    salB -= 0.10 * salB;
    if (D > 20) {
        grat = 0.30 * salB;
    } else if (D > 10) {
        grat = 0.20 * salB;
    }
    salL = salB + grat;
    printf("Valor líquido a ser pago ao vendedor: R$ %.2f\n", salL);
    return 0;
}