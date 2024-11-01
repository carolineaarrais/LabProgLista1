// Questão 15
#include <stdio.h>

int main() {
    float vh, b, l;
    int ht;
    float i;
    printf("Digite o valor da hora aula: R$ ");
    scanf("%f", &vh);
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &ht);
    printf("Digite o percentual de desconto do INSS (em porcentagem): ");
    scanf("%f", &i);
    b = vh * ht;
    l = b - (b * (i / 100));
    printf("Salário Bruto: R$ %.2f\n", b);
    printf("Salário Líquido: R$ %.2f\n", l);
    return 0;
}