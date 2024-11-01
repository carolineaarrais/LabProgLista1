// Questão 10
#include <stdio.h>

int main() {
    float cotdol, brl, usd;
    printf("Digite a cotação do dólar (quanto o dólar vale em real): ");
    scanf("%f", &cotdol);
    printf("Digite a quantidade de reais que deseja converter: ");
    scanf("%f", &brl);
    usd = brl / cotdol;
    printf("Valor convertido em dólares: %.2f\n", usd);
    return 0;
}