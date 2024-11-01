// Questão 04
#include <stdio.h>
int main() {
    float c, t;
    printf("Digite o valor da conta do restaurante: ");
    scanf("%f", &c);
    t = c + (c * 0.10);
    printf("Valor total a ser pago (incluindo 10%% da taxa de serviço): %.2f\n", t);
    return 0;
}